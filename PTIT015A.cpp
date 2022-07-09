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
        int d[10] = {};
        string a, b, c;
        cin >> a >> b >> c;
        for(int i = 0; i < a.size(); i++){
            d[a[i] - '0']++;
        }
        for(int i = 0; i < b.size(); i++){
            d[b[i] - '0']++;
        }
        for(int i = 0; i < c.size(); i++){
            d[c[i] - '0']++;
        }
        for(int i = 9; i >= 0; i--){
            while(d[i]--){
                cout << i;
            }
        }
        cout << endl;
    }
}