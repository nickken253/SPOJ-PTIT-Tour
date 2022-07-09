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
    ll n, k;
    cin >> n >> k;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    ll dem = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] >= a[k] && a[i] > 0) dem++;
        else break;
    }
    cout << dem;
}
