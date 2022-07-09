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
    char a[2 * r][2 * c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }
    int n, m;
    cin >> n >> m;
    n--, m--;
    for (int i = 0; i < 2 * r; i++)
    {
        for (int j = 0; j < 2 * c; j++)
        {
            if(i < r){
                if (j < c)
                    a[i][j] = a[i][j];
                else
                {
                    a[i][j] = a[i][2 * c - j - 1];
                }
            }
            else{
                if (j < c)
                    a[i][j] = a[2 * r - i - 1][j];
                else
                {
                    a[i][j] = a[2 * r - i - 1][2 * c - j - 1];
                }
            }
        }
    }
    if(a[n][m] == '#') a[n][m] = '.';
    else a[n][m] = '#';
    for (int i = 0; i < 2 * r; i++)
    {
        for (int j = 0; j < 2 * c; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }
}
