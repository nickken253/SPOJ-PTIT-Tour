#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//GIỐNG_BÀI_VẼ_TRANH_______________
int main()
{
    faster;
    int r, c, a, b;
    cin >> r >> c >> a >> b; 
    char one, two, qq[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            if((i + j) % 2 == 0){
                qq[i][j] = 'X';
            }
            else qq[i][j] = '.';
        }
    }
    for(int i = 0; i < r; i++){
        for(int n = 0; n < a; n++){
            for(int j = 0; j < c; j++){
                for(int m = 0; m < b; m++){
                    cout << qq[i][j];
                }
            }
            cout << endl;
        }
    }
}
