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
    while(t--){
        ll n, dem = 0;
        cin >> n;
        for(ll i = 1; i < sqrt(n); i++){
            if(n % i == 0){
                if(i % 2 == 0) dem ++;
                if((n / i) % 2 == 0) dem++;
                
            }
            
        }
        if(ceil(sqrt(n)) * ceil(sqrt(n)) == n){
            ll m = sqrt(n);
            if(m % 2 == 0) dem++;
        }
        // if(n % 2 == 0) dem++;
        cout << dem << endl;
    }
}
