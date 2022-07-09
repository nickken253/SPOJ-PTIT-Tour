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
    int n, k = 1;
    while (true)
    {
        cin >> n;
        if (n < 0) break;
        int x[n], y[n], m[n], he = 0, sumX = 0, sumY = 0;
        for(int i = 0; i < n; i++){
            cin >> x[i] >> y[i] >> m[i];
            sumX += m[i] * y[i];
            sumY += m[i] * x[i];
            he += m[i];
        }
        cout << "Case " << k << ": ";
        k++;
        cout << setprecision(2) << fixed << sumY * 1.0 / he << " ";
        cout << setprecision(2) << fixed << sumX * 1.0 / he;
        cout << endl;
    }
}
