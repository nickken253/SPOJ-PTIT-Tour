#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string a[1000];
    a[0] = "0";
    a[1] = "1";
    int k = 0, h = 2;
    for(int i = 2; i < pow(2, n); i ++){
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
    //    cout << i << " " << a[i] << endl;
    }
    for(int i = 0; i < pow(2, n); i ++){
        cout << a[i] << endl;
    }
}