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
    ll x, y, m;
    ll dem = 0;
    cin >> x >> y >> m;
    if (x >= m || y >= m)
    {
        cout << "0";
        return 0;
    }
    else
    {
        if(max(x,y) <= 0){
            cout << "-1";
            return 0;
        }
        else
        {
            ll a = min(x, y);
            ll b = max(x, y);
            if(a < 0){
                dem += -a/b;
                a += (-a/b) * b;
            }
            while (true)
            {
                x = min(a + b, b);
                y = max(a + b, b);
                a = x, b = y;
                // cout << x << " " << y << endl;
                dem++;
                if (x >= m || y >= m)
                    break;
                // if(dem > 10) break;
            }
        }
    }
    cout << dem;
}
