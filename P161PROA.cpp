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
    ll big = 1000005;
    vector<ll> check(big + 5, 0);
    check[0] = check[1] = 1;
    for (ll i = 2; i * i <= big; i++)
    {
        if (check[i] == 0)
        {
            for (ll j = i * 2; j <= big; j += i)
            {
                check[j] = 1;
            }
        }
    }
    int t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        if (ceil(sqrt(n)) * ceil(sqrt(n)) == n)
        {
            if (check[sqrt(n)] == 0)
                cout << "YES";
            else
                cout << "NO";
            cout << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
