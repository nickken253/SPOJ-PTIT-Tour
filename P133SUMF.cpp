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
    int a, b, c;
    cin >> a >> b >> c;
    int maxx = max(a, max(b, c));
    int minn = min(a, min(b, c));
    int midd = a + b + c - maxx - minn;
    int e = maxx - midd, d = midd - minn;
    if(e > d) cout << midd + d;
    else if(e < d) cout << midd - e;
    else cout << maxx + e;
}
