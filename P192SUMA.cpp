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
    ll a[n], maxx = INT_MIN, dem = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    for(ll i = 1; i < n; i++){
        if(a[i] <= a[i - 1]){
            dem += floor((a[i - 1] - a[i]) / k + 1);
            a[i] += floor((a[i - 1] - a[i]) / k + 1) * k;
        }
    }
    cout << dem;
}
