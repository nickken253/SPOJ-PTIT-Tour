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
    ll g, y;
    cin >> g >> y;
    ll a, b, tong = g / 2 - 2, tich = y;
    ll dta = tong * tong - 4 * tich;
    ll a1 = (- tong - sqrt(dta)) / (2 * -1) + 2;
    ll a2 = (- tong + sqrt(dta)) / (2 * -1) + 2;
    a = max(a1, a2);
    b = (tong + 4) - a;
    cout << min(a, b) << " " << max(a, b);
}
