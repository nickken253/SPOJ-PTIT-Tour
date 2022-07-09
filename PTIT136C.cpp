#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
//KHÔNG_CÓ_TEST_NÀO_VỚI_N_BẰNG_2___________________-
int main()
{
    faster;
    int n, check = 0;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int k = (a[0][1] + a[0][2] - a[1][2]) / 2;
    cout << k << " ";
    for(int i = 1; i < n; i++){
        cout << a[0][i] - k << " ";
    }
}

