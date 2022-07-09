#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"

int main()
{
    faster;

    int n, j, i, gt, d, hang, cot;
    cin >> n;
    int a[n][n];
    d = 0, gt = 1, hang = n - 1, cot = n - 1;
    while (d <= n / 2)
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
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
