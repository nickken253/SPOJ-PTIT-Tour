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
    if(maxx - midd > midd - minn) cout << maxx - midd - 1;
    else cout << midd - minn - 1;
    cout << endl;
}
