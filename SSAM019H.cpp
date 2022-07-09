#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
// NOT_DONE________________________
ll big = 1000000007;
// map<ll, ll> f;
ll f[10000] = {};
ll fibo(ll n){
    if(n == 1 || n == 2){
        return 1;
    }
    if(f[n] == 0){
        f[n] = fibo(n - 1) + fibo(n - 2);
        cout << n << " " << f[n] << " "<< endl;
        return f[n];
    }
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << fibo(n) << endl;
    }
}