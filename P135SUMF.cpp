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
    ll n, dem = 0;
    cin >> n;
    for(ll i = 0; i <= n; i++){
        for(ll j = 0; j <= i; j++){
            dem += (j + i);
        }
    }
    cout << dem;
}
