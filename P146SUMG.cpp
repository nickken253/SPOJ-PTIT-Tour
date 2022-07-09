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
    int n;
    int r, c, a, b;
    cin >> r >> c >> a >> b;
    cin.ignore();
    char qq[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> qq[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int m = 0; m < a; m++){
            for(int j = 0; j < c; j++){
                for(int n = 0; n < b; n++){
                    cout << qq[i][j];
                }
            }
            cout << endl;
        }
    }
}
