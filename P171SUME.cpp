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
    ll n;
    cin >> n;
    ll a[n], minn = INT_MAX, max1 = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        minn = min(minn, a[i]);
        max1 = max(a[i], max1);
    }
    ll sum = 0, max2 = INT_MIN;
    for(ll i = 0; i < n; i++){
        sum = max(a[i], a[i] + sum);
        max2 = max(sum, max2);
    }
    ll sum2 = 0;
    for(ll i = 0; i < n; i++){
        if((sum2 + a[i]) < sum2){
            continue;
        }
        else sum2 += a[i];
    }
    if(sum2 == 0) sum2 += max1;
    cout << max2 << " " << sum2;
}