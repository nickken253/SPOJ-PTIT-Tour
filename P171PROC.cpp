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
    int n, k;
    cin >> n >> k;
    double a[n + 1] = {};
    double b[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    sort(a, a + n + 1);
    // for(int i = 1; i <= n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    b[0] = a[1] * 1.0;
    b[n] = (k - a[n]) * 1.0;
    // cout << b[0] << " " << b[n] << endl;
    double maxx = LLONG_MIN;
    maxx = max(b[0], b[n]);
    for(int i = 1; i < n; i++){
        b[i] = (a[i + 1] - a[i]) * 1.0 / 2;
        // cout << a[i + 1] << " " << a[i] << " " << b[i] << endl;
        maxx = max(maxx, b[i]);
    }
    cout << setprecision(10) << fixed << maxx;
}
