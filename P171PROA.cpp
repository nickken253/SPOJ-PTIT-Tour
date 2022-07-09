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
    ll l, r, x;
    cin >> l >> r >> x;
    ll a = log(l) / log(x);
    ll b = log(r) / log(x);
    ll c = 1, check = 0;
    for(int i = 0; i <= b; i++){
        if(c >= l && c <= r){
            cout << c << " ";
            check = 1;
        }
        c *= x;
    }
    if(check == 0) cout << "-1";
}

