#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll UCLN(ll a, ll b)
{
    while (a * b != 0)
    {
        if (a > b)
        {
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a + b;
}
ll BCNN(ll a, ll b)
{
    return a * b / UCLN(a, b);
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        ll x, y, z, n, nn = 1, i = 1;
        cin >> x >> y >> z >> n;
        ll so = BCNN(x, BCNN(y, z));
        ll sum = so;
        while (i < n)
        {
            nn *= 10;
            i++;
        }
        if (sum < nn * 10)
        {
            if (nn % sum == 0)
            {
                // cout << "heso1 = " << nn / sum << endl;
                sum = sum * ((nn / sum));
            }
            else
            {
                // cout << "heso2 = " << nn / sum  + 1 << endl;
                sum = sum * ((nn / sum) + 1);
            }
            cout << sum << endl;
        }
        else
        {
            cout << "-1\n";
        }
    }
}