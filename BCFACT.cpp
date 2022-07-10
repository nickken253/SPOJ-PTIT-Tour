#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    do{
        cin >> n;
        if(n == 0){
            break;
        }
        else{
            long long a = 1;
            for(int i = 1; i <= n; i ++){
                a *= i;
            }
            cout << a << endl;
        }
    }
    while(n != 0);
}