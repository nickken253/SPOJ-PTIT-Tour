#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long

ull UCLN(ull a, ull b){
    while(a * b != 0){
        if(a > b){
            a %= b;
        }
        else{
            b %= a;
        }
    }
    return a + b;
}
ull BCNN(ull a, ull b){
    return (a * b) / UCLN(a, b);
}
int main(){
    faster;
    ull tmp = 1;
    vector<ull> f(1000004, 1);
    for(int i = 1; i < 1000004; i ++){
        f[i] = BCNN(f[i - 1],i);
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << f[n] << endl;
    }
}