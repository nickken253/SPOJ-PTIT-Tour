#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int a[105] = {};
void sinh(int i, int a[], int n, int k)
{
    for (int j = a[i - 1] + 1; j <= n - k + i; j++)
    {
        a[i] = j;
        if (i == k)
        {
            for (int m = 1; m <= k; m++)
            {
                cout << a[m];
            }
            cout << " ";
        }
        else
            sinh(i + 1, a, n, k);
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        sinh(1, a, n, k);
        cout << endl;
    }
}
