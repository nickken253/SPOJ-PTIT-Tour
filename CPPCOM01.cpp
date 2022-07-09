#include<bits/stdc++.h>
using namespace std;

int a[25], n;
void khoiTao(){
    for(int i = 0; i < n; i++){
        a[i] = 0;
    }
}
void in(){
    for(int i = 1; i <= n; i++) cout << a[i];
    cout << " ";
}
void sinh(int k){
    if(k == n){
        in();
    }
    else{
        a[k + 1] = 0;
        sinh(k + 1);
        a[k + 1] = 1;
        sinh(k + 1);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--)
    {
        // int n;
        cin >> n;
        khoiTao();
        sinh(0);
        cout << endl;
    }
}