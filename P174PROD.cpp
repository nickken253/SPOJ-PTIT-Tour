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
    ll n, m;
    ll a[5] = {}, b[5] = {};
    cin >> n >> m;
    for(ll i = 1; i <= n; i++) a[i % 5] ++; 
    for(ll i = 1; i <= m; i++) b[i % 5] ++;
    ll dem = a[0] * b[0];
    ll j = 4;
    for(ll i = 1; i <= 4; i++){
        dem += a[i] * b[j];
        j--;
    }
    cout << dem;
}

