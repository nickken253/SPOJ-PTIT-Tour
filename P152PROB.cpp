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
    int n, m;
    cin >> n >> m;
    int a[n];
    if (n == 0)
    {
        cout << n;
        return 0;
    }
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    sort(a, a + n);
    for (int i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > m)
        {
            // cout << a[i] << " ";
            k++;
        }
    }
    // cout << endl;
    cout << k;
}
