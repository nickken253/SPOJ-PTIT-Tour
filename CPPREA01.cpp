#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        ll n, a;
        cin >> n;
        vector<ll> daySo(n, -1);
        set<ll> sapXep;
        for(ll i = 0; i < n; i++){
            cin >> a;
            if(a >= 0 && a < n) {
                sapXep.insert(a);
            }
        }
        for(ll i : sapXep) daySo[i] = i;
        for(ll i = 0; i < n; i++){
            cout << daySo[i] << " ";
        }
        cout << endl;
    }
    
}