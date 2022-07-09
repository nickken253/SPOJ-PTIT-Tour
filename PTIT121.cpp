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
    while(t--){
        int a, b;
        string c;
        cin >> a >> b >> c;
        cout << a << " ";
        for(int i = 0; i < c.size(); i++){
            for(int j = 0; j < b; j++){
                cout << c[i];
            }
        }
        cout << endl;
    }
}