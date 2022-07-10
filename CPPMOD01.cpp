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
    ll big = 10000006;
    faster;
    int t;
    cin >> t;
    while(t--){
        ll x, y, p, kq = 1;
        cin >> x >> y >> p;
        for(ll i = 0; i < y; i++){
            kq = (kq * x) % p;
        }
        cout << kq << endl;
    }
}