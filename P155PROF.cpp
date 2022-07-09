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
    ll x, y, n, tmp, m;
    ll big = 1000000007;
    cin >> x >> y >> n;
    if(n % 6 == 0) n = 6;
    else n %= 6;
    for(ll i = 3; i <= n; i++){
        tmp = (y - x) % big;
        x = y, y = tmp;
    }
    if(n == 1){
        m = x % big;
    }
    else if(n == 2){
        m = y % big;
    }
    else{
        m = tmp;
    }
    if(m < 0) cout << m + big;
    else cout << m;
}