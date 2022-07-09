#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int a[105][105] = {};
int check[105][105];

void spreadSea(int i, int j){
    if(a[i + 1][j] == 0) a[i + 1][j] = -1, check[i + 1][j] = -1, spreadSea(i + 1, j); 
    if(a[i - 1][j] == 0) a[i - 1][j] = -1, check[i - 1][j] = -1, spreadSea(i - 1, j); 
    if(a[i][j + 1] == 0) a[i][j + 1] = -1, check[i][j + 1] = -1, spreadSea(i, j + 1); 
    if(a[i][j - 1] == 0) a[i][j - 1] = -1, check[i][j - 1] = -1, spreadSea(i, j - 1); 
}
void spreadEarth(int i, int j){
    if(check[i + 1][j] == 1) check[i + 1][j] = 2, spreadEarth(i + 1, j); 
    if(check[i - 1][j] == 1) check[i - 1][j] = 2, spreadEarth(i - 1, j); 
    if(check[i][j + 1] == 1) check[i][j + 1] = 2, spreadEarth(i, j + 1); 
    if(check[i][j - 1] == 1) check[i][j - 1] = 2, spreadEarth(i, j - 1); 
}
int main()
{
    faster;
    int kk = 1;
    int n, m;
    do{
        cin >> n >> m;
        if(n == 0 && m == 0) break;
        for(int i = 0; i < n + 4; i++){
            for(int j = 0; j < m + 4; j++){
                check[i][j] = -2;
                a[i][j] = -2;
            }
        }
        for(int i = 1; i < n + 3; i++){
            for(int j = 1; j < m + 3; j++){
                check[i][j] = -1;
                a[i][j] = -1;
            }
        }
        int maxx = INT_MIN;
        for(int i = 2; i < n + 2; i++){
            for(int j = 2; j < m + 2; j++){
                check[i][j] = 1;
                cin >> a[i][j];
                maxx = max(maxx, a[i][j]);
            }
        }
        int ktra = 0;
        cout << "Case " << kk << ": ";
        kk++;
        for(int k = 0; k <= maxx; k++){
            for(int i = 2; i < n + 2; i++){
                for(int j = 2; j < m + 2; j++){
                    if(a[i][j] != 0 && k != 0){
                        a[i][j]--;
                    }
                }
            }
            for(int i = 1; i < n + 3; i++){
                for(int j = 1; j < m + 3; j++){
                    if(check[i][j] == -1){
                        spreadSea(i, j);
                    }
                }
            }
            for(int i = 2; i < n + 2; i++){
                for(int j = 2; j < m + 2; j++){
                    if(a[i][j] >= 0 && check[i][j] != -1) check[i][j] = 1;
                }
            }
            int dem = 0;
            for(int i = 2; i < n + 2; i++){
                for(int j = 2; j < m + 2; j++){
                    if(check[i][j] == 1){
                        spreadEarth(i, j);
                        dem++;
                    }
                }
            }
            if(dem > 1){
                ktra = 1;
                cout << "Island splits when ocean rises " << k << " feet.";
                break;
            }
        }
        if(ktra == 0) cout << "Island never splits.";
        cout << endl;
    }
    while(true);
}
