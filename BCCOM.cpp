#include<bits/stdc++.h>
using namespace std;

#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int sum(int a){
    int tong = 0;
    while(a > 0){
        tong += a % 10;
        a /= 10;
    }
    if(tong > 9){
        return sum(tong);
    }
    return tong;
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << sum(n)  << endl;
    }
} 