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
    ll a[n], minn = INT_MAX, demAm = 0;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] < 0) demAm ++;
        minn = min(minn, abs(a[i]));
    }
    sort(a, a + n);
    ll sum = 0, mink = min(k, demAm);
    for(ll i = 0; i < mink; i++){
        a[i] = -a[i];
        k--;
    }
    sort(a, a + n);
    if(k > 0){
        if(k % 2 != 0){
            a[0] = -a[0];
        }
    }
    for(int i = 0; i < n; i++){
        sum += a[i];
    }
    cout << sum;
}