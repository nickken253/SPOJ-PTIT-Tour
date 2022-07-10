#include<bits/stdc++.h>
using namespace std;

int main(){
    int big = 1000004;
    vector<int> ngto(big + 1, 0);
    ngto[0] = ngto[1] = 1;
    for(int i = 2; i * i <= big; i++){
        if(ngto[i] == 0){
            for(int j = i * i; j <= big; j += i){
                ngto[j] = 1;
            }
        }
    }
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        for(int i = a; i <= b; i ++){
            if(ngto[i] == 0){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}