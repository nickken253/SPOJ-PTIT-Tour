#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
// GIỐNG_0_VÀ_1__________
int main()
{
    faster;
    ll a;
    string b = "";
    cin >> a;
    while (true)
    {   
        a--;
        if (a == 0)
        {
            b = '4' + b;
            break;
        }
        if (a == 1)
        {
            b = '7' + b;
            break;
        }
        if (a % 2 == 0)
            b = '4' + b;
        else
            b = '7' + b;
        a /= 2;
    }
    cout << b;
}
// 4
// 7
// 44
// 47
//
