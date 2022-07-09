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
    int x1,x2,x3,y1,y2,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if(x1 == x2) cout << x3;
    else if(x1 == x3) cout << x2;
    else cout << x1;
    cout << " ";
    if(y1 == y2) cout << y3;
    else if(y1 == y3) cout << y2;
    else cout << y1;
}
