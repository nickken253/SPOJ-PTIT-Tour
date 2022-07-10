#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long a, b, c;
    do{
        cin >> a >> b;
        if(a == 0 && b == 0){
            break;
        }
        c = a * b;
        while(a * b != 0){
            if(a > b){
                a %= b;
            }
            else{
                b %= a;
            }
        }
        cout << a + b << " " << c / (a + b) << endl;
        a = 1, b = 1;
    }
    while(a != 0 && b != 0);
}