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
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
                cout << "-1";
            else
                cout << "0";
        }
        else
            cout << 1 << endl, printf("%.5lf", -1.0 * double(c) / (double)b);
    }
    else
    {
        double dta = (double)b * (double)b - 4.0 * (double)a * (double)c;
        if (dta < 0)
            cout << "0";
        else if (dta == 0)
            cout << 1 << endl, printf("%.5lf", -1.0 * double(b) / (2.0 * (double)a));
        else
        {
            cout << 2 << endl;
            double x1 = double(-1.0 * (double)b + (sqrt(dta))) / (2 * (double)a);
            double x2 = double(-1.0 * (double)b - (sqrt(dta))) / (2 * (double)a);
            if (x1 < x2)
            {
                printf("%.5lf\n", x1);
                printf("%.5lf", x2);
            }
            else
            {
                printf("%.5lf\n", x2);
                printf("%.5lf", x1);
            }
        }
    }
}
