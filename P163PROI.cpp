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
    int ab, ac, bc;
    int a, b, c, d;
    cin >> ab >> ac >> bc;
    a = ab + ac + bc;
    b = ab * 2 + ac * 2;
    c = ab * 2 + bc * 2;
    d = ac * 2 + bc * 2;
    cout << min(a, min(b, min(c, d)));
}
