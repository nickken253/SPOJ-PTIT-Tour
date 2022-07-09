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
    int tien[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int t; 
    cin >> t;
    while(t--){
        int a, b, dem = 0;
        cin >> a;
        for(int i = 0; i < 9; i++){
            if(a >= tien[i]){
                b = a / tien[i];
                dem += b;
                a = a - b * tien[i];
            }
        }
        cout << dem << endl;
    }
    
}