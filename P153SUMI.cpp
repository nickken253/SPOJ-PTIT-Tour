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
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int check = 1, pos;
    for (int i = 1; i < n; i++)
    {
        // cout << "check" << endl;
        if (a[i] < a[i - 1])
        {
            if (check != 1)
            {
                cout << "-1";
                return 0;
            }
            else
            {
                check = 0, pos = i;
            }
        }
        
    }
    if (check == 0)
    {
        if (a[0] >= a[n - 1])
        {
            cout << (n - pos);
        }
        else
        {
            cout << "-1";
        }
    }
    else
    {
        cout << "0";
    }
}
