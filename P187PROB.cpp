#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll big = 2000006;
ll a[2000006] = {};
int main()
{
    faster;
    vector<ll> check(big + 5, 0);
    for(ll i = 2; i <= big; i++){
        if(check[i] == 0){
            for(ll j = i * 2; j <= big; j+=i){
                check[j] = 1;
                ll tmp = j;
                while(tmp % i == 0){
                    a[j] += i;
                    tmp /= i;
                }
            }
        }
    }
    ll t, sum = 0;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n == 1) continue;
        if(a[n] == 0){
            sum += n;
        }
        else{
            sum += a[n];
        }
    }
    cout << sum;
}
