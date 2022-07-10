#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m = 1;
    cin >> n;
    string a[2000000];
    a[0] = "0";
    a[1] = "1";
    int t;
    cin >> t;
    while(t--){
        int k = 0, h = 2;
        for(int i = 0; i < n; i ++){
            m *= 2;
        }
        for(int i = 2; i < m; i ++){
            a[i] = "1" + a[k];
            if(k == h - 1){
                k = 0;
                for(int j = 0; j <= i - h; j++){
                    a[j] = "0" + a[j];
                }
                h *= 2;
            }
            else{
                k++;
            }
        }
        for(int i = 0; i < m; i ++){
            cout << a[i] << endl;
        }
        cout << endl;
    }
    
}