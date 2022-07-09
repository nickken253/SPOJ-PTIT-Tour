#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
ll big = 100000001;
ll mu(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 0){
        ll c = mu(a, b / 2);
        return (c * c) % big;
    }
    else{
        ll c = mu(a, b - 1);
        return (c * a) % big;
    }
}
int main()
{
    faster;
    int t, k = 1;
    cin >> t;
    while(t--){
        cout << "Case " << k << ": ";
        k++;
        ll n;
        cin >> n;
        if(n == 0) cout << "1 0";
        else{
            ll m = mu(2, n - 1);
            ll a = (m * ((m * 2) % big + 1)) % big;
            ll b = (m * ((m * 2) % big - 1)) % big;
            cout << a << " " << b ;
        }
        cout << endl;
    }

}
