#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll mod = 123456789;
ll nhan(ll a, ll b){
    if(b == 0) return 0;
    ll t = nhan(a, b / 2) % mod;
    t = (t + t) % mod;
    if(b % 2 == 1) t = (t + a) % mod;
    return t % mod;
}
ll lt(ll a, ll b){
    if(b == 0) return 1;
    ll t = lt(a, b / 2) % mod;
    t = nhan(t, t) % mod;
    if(b % 2 == 1) t = nhan(t, a) % mod;
    return t % mod;
}
int main()
{
    faster;
    ll n;
    cin >> n;
    cout << lt(2,n - 1);
}
