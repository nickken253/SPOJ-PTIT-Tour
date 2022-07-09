#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
ll nhan(ll a, ll b, ll mod){
    if(b == 0) return 0;
    ll t = nhan(a, b / 2, mod);
    t = (t + t) % mod;
    if(b % 2 != 0) t = (t + a) % mod;
    return t;
}
int main()
{
    faster;
    ll t;
    cin >> t;
    while(t--){
        ll a, b, mod;
        cin >> a >> b >> mod;
        cout << nhan(a, b, mod) << endl;
    }
}
