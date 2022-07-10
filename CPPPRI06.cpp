#include<bits/stdc++.h>
using namespace std;

bool check(int a){
    int dem = 0;
    for(int i = 2; i <= sqrt(a); i++){
        if(a % i == 0){
            dem = 1;
            break;
        }
    }
    if(dem == 0){
        return 1;
    }
    else{
        return 0;
    }
}
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
        int n;
        cin >> n;
        for(int i = 0; i <= n / 2; i ++){
            if(ngto[i] == 0){
                if(check(n - i) == 1){
                    cout << i << " " << n - i;
                    break;
                }
            }
        }
        
        cout << endl;
    }
}