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
    // ll big = 10000006;
    faster;
    int t;
    cin >> t;
    while(t--){
        ll n, k, sum = 0, tong;
        cin >> n >> k;
        // for(ll i = 1; i <= n; i++){
        //     sum += i % k;
        // }
        // cout << "CHECK = " << sum << endl;
        ll heSo = n / k;
        ll soDu = n % k;
        ll minn = min(n, k);
        if(minn == n){
            tong = (minn + 1) * minn / 2;
        }
        else{
            minn --;
            tong = (minn + 1) * minn / 2;
        }
        tong *= heSo;
        tong = tong + (soDu + 1) * soDu / 2;
        cout << tong << endl;
    }
}