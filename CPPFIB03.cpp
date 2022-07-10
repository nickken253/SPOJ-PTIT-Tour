#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    vector<ll> fibo(200);
    vector<ll> check(10005, 0);
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    check[fibo[0]] = check[fibo[1]] = 1;
    for(ll i = 3; i < 19; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
        check[fibo[i]] = 1;
    }
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i];
        }
        for(ll i = 0; i < n; i++){
            if(check[a[i]] == 1){
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}