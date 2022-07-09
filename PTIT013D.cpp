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
        int n;
        cin >> n;
        if(n <= 2){
            if(n == 0) cout << "0";
            if(n == 1) cout << "1";
            if(n == 2) cout << "4";
        }
        else{
            if(n % 2 == 0){
                cout << n * n / 2;
            }
            else{
                cout << (n / 2 + 1) * (n / 2 + 1) + (n / 2) * (n / 2);
            }
        }
        cout << endl;
    }
}