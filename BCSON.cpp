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
    ll m, n;
    cin >> m >> n;
    ll a[m + 2][n + 2] = {};
    for(ll i = 1; i <= m; i++){
        for(ll j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    ll sum = 0;
    for(ll i = 1; i <= m; i++){
        for(ll j = 1; j <= n; j++){
            if(a[i][j] > a[i - 1][j]) sum += a[i][j] - a[i - 1][j];
            if(a[i][j] > a[i + 1][j]) sum += a[i][j] - a[i + 1][j];
            if(a[i][j] > a[i][j - 1]) sum += a[i][j] - a[i][j - 1];
            if(a[i][j] > a[i][j + 1]) sum += a[i][j] - a[i][j + 1];
        }
    }
    cout << sum + m * n;
}
