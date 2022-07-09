#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[102][102] = {};
int check[102][102] = {};
// . là 0
// # chưa kiểm tra là 1
// # đã kiểm tra là 2
void spread(int n, int m){
    if((check[n - 1][m] != 1) && (check[n + 1][m] != 1) && (check[n][m - 1] != 1) && (check[n][m + 1] != 1));
    if (check[n - 1][m] == 1) check[n - 1][m] = 2, spread(n - 1, m);
    if (check[n + 1][m] == 1) check[n + 1][m] = 2, spread(n + 1, m);
    if (check[n][m - 1] == 1) check[n][m - 1] = 2, spread(n, m - 1);
    if (check[n][m + 1] == 1) check[n][m + 1] = 2, spread(n, m + 1);
}

bool ktra(int n, int m)
{
    if (a[n - 1][m] == '#' && check[n - 1][m] == 2)
    {
        return 1;
    }
    if (a[n][m - 1] == '#' && check[n][m - 1] == 2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    faster;
    int n, m;
    cin >> n >> m;
    int k = 0;
    for (int i = 0; i <= n + 1; i++)
    {
        for (int j = 0; j <= m + 1; j++)
        {
            a[i][j] = '.';
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == '#')
            {
                check[i][j] = 1;
            }
        }
    }
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (check[i][j] == 1)
            {
                if (ktra(i, j) == 1)
                {
                    check[i][j] = 2;
                    spread(i, j);
                }
                else
                {
                    k++;
                    // cout << i << " " << j << endl;
                    spread(i, j);
                    check[i][j] = 2;
                }
            }
        }
    }
    cout << k;
}
