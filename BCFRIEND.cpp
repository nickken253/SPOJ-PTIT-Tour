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
    ll n, B;
    cin >> n >> B;
    map<ll,ll> ss;
    map<ll,ll> check;
    ll a[n], dem = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        ss[a[i]] ++;
    }
    for(ll i = 0; i < n; i++)
    {
        if(check[a[i]] == 0)
        {
            if(ss[B - a[i]] != 0)
            {
                if(a[i] == (B - a[i]))
                {  
                    dem = dem + ss[a[i]] * (ss[a[i]] - 1) / 2;
                }
                else
                {
                    if(a[i] == (B - a[i])) ss[a[i]] /= 2;
                    dem = dem + ss[a[i]] * ss[B - a[i]];
                    check[B - a[i]] = 1;
                }
            }
            check[a[i]] = 1;
        }
    }
    cout << dem;
}
