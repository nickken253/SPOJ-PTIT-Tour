#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[4][4];
int main()
{
    faster;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (a[i][j] == a[i + 1][j] && a[i][j] == a[i][j + 1])
            {
                cout << "YES";
                return 0;
            }
            if (a[i][j] == a[i + 1][j] && a[i][j] == a[i + 1][j + 1])
            {
                cout << "YES";
                return 0;
            }
            if (a[i][j] == a[i][j + 1] && a[i][j] == a[i + 1][j + 1])
            {
                cout << "YES";
                return 0;
            }
            if (a[i][j + 1] == a[i + 1][j] && a[i][j + 1] == a[i + 1][j + 1])
            {
                cout << "YES";
                return 0;
            }
        }
    }
    cout << "NO";
}
