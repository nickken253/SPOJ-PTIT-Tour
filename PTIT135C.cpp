#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


//NOT_DONE_____________________
int main()
{
    faster;
    ll n, minn = INT_MAX, minn2 = INT_MAX;
    cin >> n;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        minn = min(minn, a[i]);
    }
    ll b[minn + 1], c[minn + 1];
    for(ll j = 2; j <= minn; j++){
        b[j] = minn % j;
        c[j] = b[j];
    }
    for(ll i = 0; i < n; i++){
        for(ll j = 2; j <= minn; j++){
            if((a[i] % j) != b[j]){
                c[j] = -1;
            }
        }
    }
    ll check = 0;
    for(ll j = 2; j <= minn; j++){
        check = 1;
        if(c[j] != -1) cout << j << " ";
    }
}