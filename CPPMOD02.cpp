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
        int a, m, check = 0;
        cin >> a >> m;
        for (int i = 0; i < m; i++)
        {
            if ((a * i) % m == 1)
            {
                check = 1;
                cout << i << endl;
                break;
            }
        }
        if (check == 0)
        {
            cout << "-1\n";
        }
    }
}