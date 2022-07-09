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
    int r, c, dem = 0;
    cin >> r >> c;
    char a[r][c];
    int check[r][c] = {};
    cin.ignore();
    for(int i = 0; i < r; i ++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
            if(a[i][j] == 'S') check[i][j] = 1;
        }
    }

    
    for(int i = 0; i < r; i ++){
        int ktra = 0;
        for(int j = 0; j < c; j++){
            if(check[i][j] == 1){
                ktra = 1;
                break; 
            }
        }
        if(ktra == 0){
            for(int j = 0; j < c; j++){
                check[i][j] = 2;
            }
        }
        
    }
    for(int j = 0; j < c; j ++){
        int ktra = 0;
        for(int i = 0; i < r; i++){
            if(check[i][j] == 1){
                ktra = 1;
                break; 
            }
        }
        if(ktra == 0){
            for(int i = 0; i < r; i++){
                check[i][j] = 2;
            }
        } 
    }
    for(int i = 0; i < r; i ++){
        for(int j = 0; j < c; j++){
            if(check[i][j] == 2) dem++;
        }
    }
    cout << dem;
}
