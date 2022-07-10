#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

ll UCLN(ll a, ll b){
    if(!a)
    {
        return b;
    }
    else return UCLN(b % a, a);
}
int main(){
    faster;
    ll big = 1000000007;
    int t;
    cin >> t;
    while(t--){
        ll n, tich = 1;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
            tich = (tich * a[i]) % big;
        }
        ll tmp = a[0];
        for(ll i = 1; i < n; i++){
            tmp = UCLN(tmp, a[i]);
        }
        ll kq = 1;
        for(int i = 0; i < tmp; i++){
            kq = (kq * tich) % big;
        }
        cout << kq << endl;
    }
}