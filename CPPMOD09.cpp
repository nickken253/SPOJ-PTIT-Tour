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
    ll t, big = 1000000007;
    cin >> t;
    while(t--){
        ll n, r;
        cin >> n >> r;
        ll kq = 1;
        for(int i = 1; i <= r; i++, n--){
            kq = (kq * n / i) % big;
            // cout << kq << endl;
        }
        // cout << "____________________" << endl;
        cout << kq << endl;
    }
}
