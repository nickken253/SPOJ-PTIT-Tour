#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


ll lt(ll a, ll b, ll mod){
    if(b == 0) return 1;
    ll t = lt(a, b / 2, mod);
    t = (t % mod * t % mod) % mod;
    if(b % 2 == 1) t = (t % mod * a % mod) % mod;
    return t;
}
void rutGon(string a, ll b, ll mod){
    ll sum = 0;
    for(int i = 0; i < a.size(); i++){
        sum = (sum * 10 + (a[i] - '0')) % mod;
        sum %= mod;
    }
    ll kq = lt(sum, b, mod);
    cout << kq << endl;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int b, mod;
        string a;
        cin >> a >> b >> mod;
        rutGon(a, b, mod);
    }
}
