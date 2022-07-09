#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll tinh(ll a){
    if(a == 0) return 0;
    if(a % 2 == 0) return tinh(a / 2);
    else return tinh(a / 2) + 1;
}
int main()
{
    faster;
    // vector<ll> daySo(100006, 0);
    // for(ll i = 0; i < 50003; i++){
    //     daySo[i*2] = daySo[i];
    //     daySo[i*2 + 1] = daySo[i] + 1;
    // }
    vector<ll> ts(100005, 0);
    ll n;
    cin >> n;
    for(ll i = 0; i < n; i++){
        ll a;
        cin >> a;
        ts[tinh(a)]++;
    }
    // cout << tinh(536870911) << endl;
    ll sum = 0;
    for(ll i = 0; i < 100005; i++){
        if(ts[i] >= 2){
            sum += (ts[i] * (ts[i] - 1) / 2);
        }
    }
    cout << sum;
}
