#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main()
{
    faster;
    int n;
    cin >> n;
    for(int i = - n; i <= n ; i ++){
        // cout << i << ": ";
        
        for(int k = 0; k < abs(i); k++){
            cout << "  ";
        }
        for(int j = 0; j <= n ; j++){
            
            if(j <= n - abs(i)){
                cout << abs(j) << " ";
            }
        }
        for(int j = n; j >= 0 ; j--){
            
            if(j <= n - 1 - abs(i)){
                cout << abs(j);
                if(j != 0) cout << " ";
            }
        }
        cout << endl;
    }
}
