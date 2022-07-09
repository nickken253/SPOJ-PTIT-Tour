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
        ll n, m, minn = INT_MAX;
        cin >> n >> m;
        ll dem = 0;
        for(int i = 1; i < m; i++){
            if((i * i) % m == 1){
                ll a = i + m * (n / m);
                if(a > n){
                    a -= m;
                }
                dem += (a - i) / m + 1;
                // dem += ceil((a - i) * 1.0 / m);
            }
        }
        cout << dem << endl;
    }
}
