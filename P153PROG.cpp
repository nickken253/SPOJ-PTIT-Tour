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
    ll n, k, dem = 0;
    cin >> n >> k;
    if(n % 2 == 0){
        if(k <= n / 2) cout << 2 * k - 1;
        else cout << 2 * k - n;
    }
    else{
        if(k <= n / 2 + 1) cout << 2 * k - 1;
        else cout << 2 * k - n - 1;
    }
}
