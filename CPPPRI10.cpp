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
    ll big = 10000007;
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
        ll n, sum = 0;
        cin >> n;
        if(ngto[n] != 0){
            ll m = tongCS(n);
            for (ll i = 0; i <= n; i++)
            {
                while (n % so[i] == 0)
                {   
                    ll pk = so[i];
                    if(pk > 9){
                        pk = tongCS(pk);
                    }
                    sum += pk;
                    n /= so[i];
                }
            }
            if (sum == m)
            {
                cout << "YES";
            }
            else
            {
                cout << "NO";
            }
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
}