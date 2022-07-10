#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll tongCS(ll a)
{
    ll sum = 0;
    while (a != 0)
    {
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
int main()
{
    faster;
    ll big = 100007;
    vector<ll> ngto(big + 1, 0);
    vector<ll> so(big + 1);
    ngto[0] = ngto[1] = 1;
    for (ll i = 2; i * i <= big; i++)
    {
        if (ngto[i] == 0)
        {
            for (ll j = i * i; j <= big; j += i)
            {
                ngto[j] = 1;
            }
        }
    }
    ll k = 0;
    for (ll i = 0; i <= big; i++)
    {
        if (ngto[i] == 0)
        {
            so[k] = i;
            k++;
        }
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, sum = 0, mn;
        cin >> n;
        ll m = tongCS(n);
        if(n == 1){
            mn = 1;
        }
        for (ll i = 0; so[i] <= sqrt(n); i++)
        {
            while(n % so[i] == 0)
            {   
                ll tongSoI = so[i];
                sum += tongCS(tongSoI);
                n /= so[i];
            }
        }
        if (n != 1)
        {   
            n = tongCS(n);
            sum += n;
        }
        if (m == sum || mn == 1)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }
}