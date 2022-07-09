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
    while(t--){
        ll n, minn = INT_MAX;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            minn = min(minn, a[i]);
        }
        for(ll i = 0; i < n; i++){
            a[i] -= minn;
        }
        ll UC = a[0];
        for(ll i = 1; i < n; i++){
            UC = __gcd(UC, a[i]);
        }
        ll dem = 0;
        for(ll i = 1; i <= sqrt(UC); i++){
            if(UC % i == 0){
                if(i != UC / i) dem += 2;
                else dem ++;
            }
        }
        cout << dem << endl;
    }
}
