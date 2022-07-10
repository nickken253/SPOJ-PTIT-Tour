#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a, b = "";
        cin >> a;
        char k = a.back();
        b = k + b;
        a.erase(a.size() - 1);
        k = a.back();
        b = k + b;
        if(b == "86"){
            cout << "1\n";
        }
        else{
            cout << "0\n";
        }
    }
}