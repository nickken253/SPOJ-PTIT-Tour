#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct timee
{
    int hh, mm, ss;
};
int main()
{
    faster;
    string a;
    cin >> a;
    int n = a.size();
    string b = "", c = "";
    b = b + a[n - 2] + a[n - 1];
    a.erase(n - 2, 2);
    int h = (a[0] - '0') * 10 + (a[1] - '0');
    a.erase(0, 2);
    if (b == "AM")
    {
        if (h == 12)
            h = 0;
    }
    else
    {
        if(h <= 11){
            h += 12;
        }
    }
    cout << setfill('0') << setw(2) << h << a;
}
