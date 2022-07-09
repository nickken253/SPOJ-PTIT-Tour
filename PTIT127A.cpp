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
    int m, n, k;
    cin >> m >> n >> k;
    cout << min(m / 2, min(n , (m + n - k) / 3));
}
