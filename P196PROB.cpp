#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int main()
{
    faster;
    ll a, b, c;
    cin >> a >> b >> c;
    cout << max(a, max(b,c)) - min(a,min(b,c));
}
