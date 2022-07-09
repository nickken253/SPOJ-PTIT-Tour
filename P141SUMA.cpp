#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

// CÔNG THỨC CCW
int main()
{
    faster;
    ll xa,ya,xb,yb,xc,yc;
    cin >> xa >> ya >> xb >> yb >> xc >> yc;
    ll d = (xb - xa) * (yc - ya) - (xc - xa) * (yb - ya);
    if(d == 0) cout << "TOWARDS";
    else if(d > 0) cout << "LEFT";
    else cout << "RIGHT";
}
