#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//NOT_DONE_______________-
ll mod = 1000000007;
ll nhan(ll a, ll b)
{
    if (b == 0)
        return 0;
    ll t = nhan(a, b / 2);
    t = (t + t) % mod;
    if (b % 2 != 0)
        t = (t + a) % mod;
    return t;
}
ll lt(ll a, ll b)
{
    if (b == 0)
        return 1;
    ll t = lt(a, b / 2);
    t = nhan(t, t) % mod;
    if (b % 2 != 0)
        t = nhan(t, a) % mod;
    return t;
}
int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, x;
        cin >> n >> x;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 0)
        {
            cout << "0" << endl;
            continue;
        }
        ll sum = 0;
        for (int i = n - 1; i >= 0; i--)
        {
           sum += a[i] * (lt(x, i) % mod);
           sum %= mod;
           cout << a[i] << " ";
        }
        cout << endl;
        cout << sum << endl;
    }
}
