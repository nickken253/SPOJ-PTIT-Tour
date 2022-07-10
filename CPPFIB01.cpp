#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    ll big = 1000000007;
    faster;
    vector<ll> fibo(1005);
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i < 1004; i++){
        fibo[i] = (fibo[i - 1] + fibo[i - 2]) % big;
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << fibo[n] % big << endl;
    }
}