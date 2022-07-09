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
        int a, b, c;
        cin >> a >> b >> c;
        if (a == 0 && (b == 0 || c == 0))
            cout << "NO";
        else
        {
            if (b == c)
                cout << "YES";
            else
            {
                if (abs(b - c) % 3 == 0)
                {
                    cout << "YES";
                }
                else
                    cout << "NO";
            }
        }
        cout << endl;
    }
}
