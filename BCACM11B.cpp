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
    int t;
    cin >> t;

    while (t--)
    {
        int x, m, n, i, j, hang, cot, d, gt;
        cin >> x >> m >> n;
        int a[x][x] = {};
        d = 0, cot = x - 1, hang = x - 1, gt = 1;
        while (d <= x / 2)
        {
            for (i = d; i <= cot; i++)
            {
                a[d][i] = gt++;
            }
            for (i = d + 1; i <= hang; i++)
            {
                a[i][cot] = gt++;
            }
            for (i = cot - 1; i >= d; i--)
            {
                a[hang][i] = gt++;
            }
            for (i = hang - 1; i > d; i--)
            {
                a[i][d] = gt++;
            }
            d++;
            hang--;
            cot--;
        }
        // if(x % 2 != 0){
        //     int b = ceil(x / 2);
        //     a[b][b] = x * x;
        // }
        cout << a[m - 1][n - 1] << endl;
    }
}
