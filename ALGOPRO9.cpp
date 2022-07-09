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
        ll l, r;
        cin >> l >> r;
        vector<ll> check(r - l + 1, 0);
        for(ll i = 2; i * i <= r; i++){
            for(ll j = max(i * i, (l + i - 1) / i * i); j <= r; j += i){
                check[j - l] = 1;
            }
        }
        if(l <= 1) check[1 - l] = 1;
        ll dem = 0;
        for(ll i = l; i <= r; i++){
            if(check[i - l] == 0) dem++;
        }
        cout << dem << endl;
    }
    
}

