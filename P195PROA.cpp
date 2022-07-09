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
    int k = n / 7;
    int maxx, minn;
    switch (n % 7)
    {
    case 0:
        maxx = 2 * k;
        minn = 2 * k;
        break;
    case 1:
        maxx = 2 * k + 1;
        minn = 2 * k;
        break;
    case 2:
    case 3:
    case 4:
    case 5:
        maxx = 2 * k + 2;
        minn = 2 * k;
        break;
    case 6:
        maxx = 2 * k + 2;
        minn = 2 * k + 1;
        break; 
    default:
        break;
    }
    cout << minn << " " << maxx;
}