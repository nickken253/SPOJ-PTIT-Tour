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
    ll a,b,c,ab,ac,bc;
    cin >> ab >> ac >> bc;
    a = sqrt(ab * bc * ac) / bc;
    b = sqrt(ab * bc * ac) / ac;
    c = sqrt(ab * bc * ac) / ab;
    cout << 4 * (a + b + c);
}
