#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

char a[35][35];
int hang(int n, int m){
    if(a[n][m] == a[n][m + 1] && a[n][m + 1] == a[n][m + 2]) return 1;
    return 0;
}
int cot(int n, int m){
    if(a[n][m] == a[n + 1][m] && a[n + 1][m] == a[n + 2][m]) return 1;
    return 0;
}
int cheoP(int n, int m){
    if(a[n][m] == a[n + 1][m + 1] && a[n + 1][m + 1] == a[n + 2][m + 2]) return 1;
    return 0;
}
int cheoT(int n, int m){
    if(a[n][m] == a[n + 1][m - 1] && a[n + 1][m - 1] == a[n + 2][m - 2]) return 1;
    return 0;
}
int kiemTra(int n, int m){
    if(hang(n,m) == 1 || cot(n,m) == 1 || cheoP(n,m) == 1 || cheoT(n,m) == 1) return 1;
    return 0;
}
int main()
{
    faster;
    int n;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n + 4; i++){
        for(int j = 0; j < n + 4; j++){
            a[i][j] = '.';
        }
    }
    for(int i = 2; i < n + 2; i++){
        for(int j = 2; j < n + 2; j++){
            cin >> a[i][j];
        }
    }
    // for(int i = 0; i < n + 4; i++){
    //     for(int j = 0; j < n + 4; j++){
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    for(int i = 2; i < n + 2; i++){
        for(int j = 2; j < n + 2; j++){
            if(a[i][j] != '.'){
                if(kiemTra(i,j) == 1){
                    cout << a[i][j];
                    return 0;
                }
            }
        }
    }
    cout << "ongoing";
}
