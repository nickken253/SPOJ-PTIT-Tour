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
    ll big = 1000006;
    vector<ll> check(big + 5, 0);
    vector<ll> sum(big + 5, 0);
    vector<ll> check2(big + 5, 0);
    vector<ll> sum2(big + 5, 0);
    for(ll i = 1; i <= big; i++){
        for(ll j = i; j <= big; j += i){
            check[j] ++;
            sum[j] += i;
        }
    }
    sum2[0] = check2[0] = 0;
    for(ll i = 1; i <= big; i++){
        check2[i] = check2[i - 1] + check[i];
        sum2[i] = sum2[i - 1] + sum[i];
    }
    ll t;
    cin >> t;
    while(t--){
        ll l, r;
        cin >> l >> r;
        if(l == 0) l++;
        cout << check2[r] - check2[l - 1] << " " << sum2[r] - sum2[l - 1] << endl;
    }
}
