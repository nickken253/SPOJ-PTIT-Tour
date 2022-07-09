#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[55][55];
int ktra[55][55] = {};
int check(int i, int j){
    int dem = 0;
    if(a[i - 1][j - 1] == 'o') dem++;
    if(a[i - 1][j] == 'o') dem++;
    if(a[i - 1][j + 1] == 'o') dem++;
    if(a[i][j - 1] == 'o') dem++;
    if(a[i][j + 1] == 'o') dem++;
    if(a[i + 1][j - 1] == 'o') dem++;
    if(a[i + 1][j] == 'o') dem++;
    if(a[i + 1][j + 1] == 'o') dem++;
    return dem;
}
void spread(int i, int j, int &cnt){
    int dem = 0;
    if(ktra[i - 1][j - 1] == 1) cnt++;
    if(ktra[i - 1][j] == 1) cnt++;
    if(ktra[i - 1][j + 1] == 1) cnt++;
    if(ktra[i][j - 1] == 1) cnt++;
    if(ktra[i][j + 1] == 1) cnt++;
    if(ktra[i + 1][j - 1] == 1) cnt++;
    if(ktra[i + 1][j] == 1) cnt++;
    if(ktra[i + 1][j + 1] == 1) cnt++;
}
int main()
{
    faster;
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r + 2; i++){
        for(int j = 0; j < c + 2; j++){
            a[i][j] = '.';
        }
    }
    for(int i = 1; i < r + 1; i++){
        for(int j = 1; j < c + 1; j++){
            cin >> a[i][j];
            if(a[i][j] == 'o') ktra[i][j] = 1;
        }
    }
    int maxx = 0, x = 0, y = 0;
    for(int i = 1; i < r + 1; i++){
        for(int j = 1; j < c + 1; j++){
            if(a[i][j] == '.'){
                if(maxx < check(i, j)){
                    maxx = check(i, j);
                    x = i, y = j;
                }
            }
        }
    }
    int cnt = 0;
    if(x != 0 && y != 0){
        a[x][y] = 'o';
        ktra[x][y] = 1;
    }
    
    for(int i = 1; i < r + 1; i++){
        for(int j = 1; j < c + 1; j++){
            if(ktra[i][j] == 1){
                ktra[i][j] = 2;
                spread(i, j, cnt);
            }
        }
    }
    cout << cnt;
}
