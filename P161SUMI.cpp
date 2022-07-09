#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

bool cmp(ll a, ll b)
{
    return a > b;
}
int main()
{
    faster;
    ll n, k;
    cin >> n >> k;
    cin.ignore();
    string a;
    cin >> a;
    ll ts[27] = {};
    for (ll i = 0; i < n; i++)
    {
        ts[a[i] - 'A']++;
    }
    sort(ts, ts + 27, cmp);
    ll sum = 0, slg = 0;
    for (ll i = 0; i < 27; i++)
    {
        if (slg + ts[i] > k)
        {
            sum += (k - slg) * (k - slg);
        }
        else
        {
            sum += ts[i] * ts[i];
            slg += ts[i];
        }
    }
    cout << sum;
}
