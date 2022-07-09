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
    int n;
    cin >> n;
    int a[n][3], d[n] = {}, cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> a[i][j];
            d[i] += a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        if(d[i] >= 2) cnt++;
    }
    cout << cnt;
}
