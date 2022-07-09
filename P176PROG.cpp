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
    ll n, x, y, z, k;
    cin >> n >> x >> y >> z;
    k = z;
    while(y * z != 0){
        if(y > z) y %= z;
        else z %= y;
    }
    z += y;
    if(k / z < n) cout << k / z;
    else cout << n;
}
