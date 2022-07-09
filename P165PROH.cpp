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
    ll t;
    cin >> t;
    while(t--){
        ll ab, ac, bc, a, b, c;
        cin >> ab >> ac >> bc;
        a = sqrt(ab * ac * bc) / bc;
        b = sqrt(ab * ac * bc) / ac;
        c = sqrt(ab * ac * bc) / ab;
        cout << (a + b + c) * 4 << endl;
    }
}
