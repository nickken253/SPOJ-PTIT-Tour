#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= sqrt(n); i++){
        int dem = 0;
        while(n % i == 0){
            dem ++;
            n /= i;
        }
        if(dem != 0){
            cout << i << " " << dem << endl;
        }
    }
    if(n != 1){
        cout << n << " 1";
    }
}