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
        int r, c;
        cin >> c >> r;
        int a[r][c];
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                cin >> a[i][j];
            }
        }
        int minn = INT_MAX;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                int sum = 0;
                for (int k = 0; k < r; k++)
                {
                    for (int m = 0; m < c; m++)
                    {
                        sum += (abs(k - i) + abs(m - j)) * a[k][m];
                    }
                }
                minn = min(minn, sum);
            }
        }
        cout << minn << endl;
    }
}
