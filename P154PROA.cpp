#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

//NHÂN_ẤN_ĐỘ
ll nhan(ll a, ll b, ll k){
    if(b == 0) return 0;
    ll t = nhan(a, b / 2, k) % k;
    t = ((t % k) + (t % k)) % k;
    if(b % 2 != 0) t = ((t % k) + (a % k)) % k;
    return t % k;
}

ll lt(ll a, ll b, ll k){
    if(b == 0) return 1;
    ll t = lt(a, b / 2, k) % k;
    ll tmp = nhan(t, t, k);
    if(b % 2 != 0) tmp = nhan(tmp, a, k);
    return tmp;
}

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        ull n, m, k;
        cin >> n >> m >> k;
        cout << lt(n, m, k) % k << endl;
    }
}
