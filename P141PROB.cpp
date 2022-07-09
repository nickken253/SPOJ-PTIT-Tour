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
int check[55][55] = {-1};
int ktraMax(int i, int j){
    return (a[i - 1][j - 1] == 'o') + (a[i - 1][j] == 'o') + \
            (a[i - 1][j + 1] == 'o') + (a[i][j - 1] == 'o') + \
            (a[i][j + 1] == 'o') + (a[i + 1][j - 1] == 'o') + \
            (a[i + 1][j] == 'o') + (a[i + 1][j + 1] == 'o');
}
void spread(int i, int j, int &dem){
    if(check[i][j + 1] == 1)  dem ++;
    if(check[i][j - 1] == 1)  dem ++;
    if(check[i - 1][j + 1] == 1) dem ++;
    if(check[i + 1][j + 1] == 1)  dem ++;
    if(check[i - 1][j - 1] == 1)  dem ++;
    if(check[i + 1][j - 1] == 1)  dem ++;
    if(check[i + 1][j] == 1)  dem ++;
    if(check[i - 1][j] == 1)  dem ++;
}
int main()
{
    faster;
    int r, c;
    cin >> r >> c;
    for(int i = 0; i < r + 2; i ++){
        for(int j = 0; j < c + 2; j ++){
            a[i][j] = '*';
        }
    }
    for(int i = 1; i < r + 1; i ++){
        for(int j = 1; j < c + 1; j ++){
            cin >> a[i][j];
            if(a[i][j] == 'o') check[i][j] = 1;
            if(a[i][j] == '.') check[i][j] = 0;
        }
    }
    int maxx = INT_MIN, maxj = 0, maxi = 0;
    for(int i = 1; i < r + 1; i ++){
        for(int j = 1; j < c + 1; j ++){
            if(a[i][j] == '.'){
                if(ktraMax(i, j) > maxx){
                    maxx = ktraMax(i, j);
                    maxi = i, maxj = j;
                }
            }
        }
    }
    // cout << maxi << " " << maxj;
    int dem = 0;
    if(maxi != 0 && maxj != 0){
        a[maxi][maxj] = 'o', check[maxi][maxj] = 1;
    }
    for(int i = 1; i < r + 1; i ++){
        for(int j = 1; j < c + 1; j ++){
            if(check[i][j] == 1){
                // cout << i << " " << j << endl;
                check[i][j] == 2;
                spread(i, j, dem);
            }
        }
    }
    // for(int i = 0; i < r + 2; i ++){
    //     for(int j = 0; j < c + 2; j ++){
    //         cout << a[i][j];
    //     }
    //     cout << endl;
    // }
    cout << dem / 2;
}
