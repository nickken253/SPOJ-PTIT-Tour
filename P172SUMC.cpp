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
    switch (n % 4)
    {
    case 1: cout << 8;
        break;
    case 2: cout << 4; break;
    case 3: cout << 2; break;
    case 0: cout << 6; break;
    default:
        break;
    }
}
