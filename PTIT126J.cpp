#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int main()
{
    faster;
    ll n, m;
    cin >> n >> m;
    ll a[n];
    for(ll i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    // for(ll i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    ll sum = 0, k = 1;
    for(ll i = n - 1; i > 0; i--){
        ll alp = a[i] - a[i - 1];
        // cout << a[i] << " " << a[i - 1] << endl;
        for(ll j = 1; j <= alp; j++){
            if(sum >= m){
                cout << a[i] - j + 1;
                return 0;
            }
            sum += k;
            // cout << sum << endl;
        }
        // sum += k * alp;
        k ++;
    }
}
