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
        ll xa, xb, ya, yb;
        ll kq;
        cin >> xa >> ya >> xb >> yb;
        if(ya * yb > 0){
            ya = - ya;
            
        }
        kq = sqrt(pow(xa - xb, 2) + pow(ya - yb, 2));
        cout << kq << endl;
    }
}