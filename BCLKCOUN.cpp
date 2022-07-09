#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
// 0 là .
// 1 là W chưa kiểm tra
// 2 là W đã kiểm tra
char a[105][105];
int check[105][105] = {};
void spread(int i, int j){
    if(check[i + 1][j] == 1) check[i + 1][j] = 2, spread(i + 1, j);
    if(check[i - 1][j] == 1) check[i - 1][j] = 2, spread(i - 1, j);
    if(check[i][j + 1] == 1) check[i][j + 1] = 2, spread(i, j + 1);
    if(check[i][j - 1] == 1) check[i][j - 1] = 2, spread(i, j - 1);
    if(check[i + 1][j + 1] == 1) check[i + 1][j + 1] = 2, spread(i + 1, j + 1);
    if(check[i + 1][j - 1] == 1) check[i + 1][j - 1] = 2, spread(i + 1, j - 1);
    if(check[i - 1][j + 1] == 1) check[i - 1][j + 1] = 2, spread(i - 1, j + 1);
    if(check[i - 1][j - 1] == 1) check[i - 1][j - 1] = 2, spread(i - 1, j - 1);        
}
int main()
{
    faster;
    int n, m;
    cin >> n >> m;
    for(int i = 0; i <= n + 1; i++){
        for(int j = 0; j <= m + 1; j++){
            a[i][j] = '.';
        }
    }
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            cin >> a[i][j];
            if(a[i][j] == 'W'){
                check[i][j] = 1;
            }
        }
    }
    int dem = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(check[i][j] == 1){
                spread(i, j);
                // cout << i << " " << j << endl;
                dem++;
            }
        }
    }
    cout << dem;
}
