#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll n, dem = 0;
        cin >> n;
        if (n == 0)
        {
            cout << 1 << endl;
            continue;
        }
        for (ll i = 0; i * i <= n; i++)
        {
            ll tmp = n - i * i;
            if (i * i > tmp) break;
            if ((ceil(sqrt(tmp)) * ceil(sqrt(tmp))) == tmp) dem++;
        }
        cout << dem << endl;
    }
}
