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
    int a[n + 2] = {};
    for(int i = 1; i < n + 1; i++){
        cin >> a[i];
    }
    int m;
    cin >> m;
    int x[m], y[m];
    for(int i = 0; i < m; i++){
        cin >> x[i] >> y[i];
        a[x[i] - 1] += y[i] - 1;
        a[x[i] + 1] += a[x[i]] - y[i];
        a[x[i]] = 0;
    }
    for(int i = 1; i < n + 1; i++){
        cout << a[i] << endl;
    }
}
