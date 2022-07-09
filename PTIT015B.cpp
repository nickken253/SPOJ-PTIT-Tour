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
    ll t;
    cin >> t;
    while(t--){
        ll r, c, big = 1005;
        cin >> r >> c;
        ll a[r][c], xgre[big] = {}, ygre[big] = {}, xred[big] = {}, yred[big] = {};
        for(ll i = 0; i < r; i++){
            for(ll j = 0; j < c; j++){
                char k;
                cin >> k;
                a[i][j] = k - '0';
                if(a[i][j] == 1){
                    xgre[j]++;
                    ygre[i]++;
                }
                else if(a[i][j] == 2){
                    xred[j]++;
                    yred[i]++;
                }
            }
        }
        ll sum = 0;
        for(ll i = 0; i < r; i++){
            for(ll j = 0; j < c; j++){
                if(a[i][j] == 1){
                    sum += xred[j] * yred[i];
                    // cout << sum << endl;
                }
                else if(a[i][j] == 2){
                    sum += xgre[j] * ygre[i];
                    // cout << sum << endl;
                }
            }
        }
        cout << sum << endl;
    }
}
