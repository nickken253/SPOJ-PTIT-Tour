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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        ll maxx = INT_MIN;
        for(ll i = 0; i < n; i++){
            ll mul = 1;
            for(ll j = i; j < n; j++){
                mul *= a[j];
                maxx = max(maxx, mul);
            }
        }
        cout << maxx << endl;
    }
        
}