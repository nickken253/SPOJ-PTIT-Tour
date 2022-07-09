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
    int r, c;
    cin >> r >> c;
    int a[r + 2][c + 4] = {};
    for(int i = 2 ; i < r + 2; i ++){
        for(int j = 2; j < c + 2; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 2 ; i < r + 2; i ++){
        for(int j = 2; j < c + 2; j++){
            a[i][j] = max(a[i][j] + a[i - 1][j - 2], max(a[i][j] + a[i - 1][j + 2], max(a[i][j] + a[i - 2][j -1], a[i][j] + a[i - 2][j + 1])));
        }
    }
    int maxx = INT_MIN;
    // for(int i = 0 ; i < r + 2; i ++){
    //     for(int j = 0; j < c + 4; j++){
    //         cout << a[i][j] << " ";
    //     }
    //     cout << endl;
    // }
    for(int i = 0 ; i < c + 4; i ++){
        maxx = max(maxx, a[r + 1][i]);
    }
    // cout << endl;
    cout << maxx;
}
