#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    ll big = 10000007;
    vector<ll> ngto(big + 1, 0);
    vector<ll> so(big + 1);
    ngto[0] = ngto[1] = 1;
    for(ll i = 2; i * i <= big; i++){
        if(ngto[i] == 0){
            for(ll j = i * i; j <= big; j += i){
                ngto[j] = 1;
            }
        }
    }
    ll k = 0;
    for(ll i = 0; i <= big; i ++){
        if(ngto[i] == 0){
            so[k] = i;
            k++;
        }
    }
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        for(ll i = 0; i <= sqrt(n); i++){
            while(n % so[i] == 0){
                cout << so[i] << " ";
                n /= so[i];
            }
        }
        if(n != 1){
            cout << n;
        }
        cout << endl;
    }
}