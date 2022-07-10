#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

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
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        ull x, y;
        string a;
        cin >> a >> x >> y;
        ull b = UCLN(x, y);
        while(b--){
            cout << a;
        }
        cout << endl;
    }
    

}