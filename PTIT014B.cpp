#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int tong(int n)
{
    int sum = 0;
    while (n != 0)
    {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int xa, ya, ua, va, xb, yb, ub, vb;
        cin >> xa >> ya >> ua >> va >> xb >> yb >> ub >> vb;
        if((ya <= vb && vb <= va && xb <= ua && xa <= ub) || (yb <= va && va <= vb && xb <= ua && xa <= ub)){
            cout << "1";
        }
        else{
            cout << "0";
        }
        cout << endl;
    }
}