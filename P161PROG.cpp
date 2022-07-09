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
    ll big = 1000006;
    vector<ll> check(big + 10, 0);
    vector<ll> ngto(big + 10);
    check[0] = check[1] = 1;
    for(ll i = 2; i * i <= big; i++){
        if(check[i] = 0){
            for(ll j = i * 2; j <= big; j += i){
                check[j] = 1;
            }
        }
    }
    ll k = 0;
    for(ll i = 2; i <= big; i++){
        if(check[i] == 0) ngto[k] = i, k++;
    }
    ngto[k] = -1;
    faster;
    ll n;
    cin >> n;
    set<ll> daySo;
    ll m = n, dem = 0, tich = 1;
    k = 0;
    while(true){
        if(ngto[k] == -1) break;
        if(m % ngto[k] == 0){
            daySo.insert(ngto[k]);
            m /= ngto[k];
        }
        else k++;
    }
    if(m > 1) daySo.insert(m);
    // for(auto i : daySo) cout << i << " ";
    for(auto i : daySo) tich *= i;
    cout << endl << tich;
}
