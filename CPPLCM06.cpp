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
        ll n, m;
        cin >> n >> m;
        ll sum = ((n + 1) * n / 2 + m);
        ll a = sum / 2;
        ll b = a - m;
        if(sum % 2 != 0){
            cout << "No" << endl;
            continue;
        }
        if(__gcd(a, b) == 1) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
}
