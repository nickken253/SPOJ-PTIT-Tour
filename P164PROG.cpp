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
    long long f[10004];
    f[1] = 1;
    for (int i = 2; i < 1000; i++)
    {
        f[i] = f[i - 1] + i;
        // cout << i << " " << f[i] << endl;
    }
    int sum = 0;
    for (int i = 1; i < 1000; i++)
    {   
        sum += f[i];
        if (sum > n)
        {
            cout << i - 1;
            break;
        }
    }
}
