#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long a, b ,c;
        cin >> a >> b;
        c = a * b;
        while(a * b != 0){
            if(a > b){
                a %= b;
            }
            else{
                b %= a;
            }
        }
        cout << c / (a + b) << " " << a + b << endl;
    }
}