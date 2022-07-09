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
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for(ll i = 0; i <= n; i++){
        cin >> a[i];
    }
    ll m = 0;
    for(ll i = n; i >= 1; i--){
        if((a[i] + m) % i == 0){
            m += (a[i] + m) / i;
        }
        else{
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}
