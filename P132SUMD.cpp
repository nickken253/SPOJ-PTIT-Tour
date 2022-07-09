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
    if (b + c == a) cout << a << "=" << b << "+" << c;
    else if (b - c == a) cout << a << "=" << b << "-" << c;
    else if (b * c == a) cout << a << "=" << b << "*" << c;
    else if (b % c == 0 && b / c == a) cout << a << "=" << b << "/" << c;
    else if (a + b == c) cout << a << "+" << b << "=" << c;
    else if (a - b == c) cout << a << "-" << b << "=" << c;
    else if (a * b == c) cout << a << "*" << b << "=" << c;
    else if (a % b == 0 && a / b == c) cout << a << "/" << b << "=" << c;  
}
