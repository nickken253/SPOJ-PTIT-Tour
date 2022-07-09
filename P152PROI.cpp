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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        n %= 360;
        ll uc = __gcd(n, (ll)180);
        ll tu = abs(n) / uc, mau = 180 / uc;
        // cout << tu << "/" << mau << endl;
        if(tu % mau == 0){
            if(tu % 2 == 0) cout << "0$";
            else cout << "$";
        }
        else{
            if(tu == 1) cout << "$/" << mau;
            else cout << tu << "$/" << mau;
        }
        cout << endl;
    }
}
