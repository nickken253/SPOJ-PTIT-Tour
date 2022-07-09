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
    ll n, k;
    cin >> n >> k;
    ll a = 1;
    for(int i = 0; i < k; i++) a *= 10;
    ll bc = n * a / __gcd(n, a);
    cout << bc;
}
