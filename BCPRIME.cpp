#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        cin >> a;
        int dem = 0;
        for(int i = 0; i <= a.size() / 2; i++){
            if(a[i] != a[a.size() - 1 - i]){
                dem = 1;
                break;
            }
        }
        if(!dem){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}