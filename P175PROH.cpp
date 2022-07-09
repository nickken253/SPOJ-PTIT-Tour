#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

int main()
{
    faster;
    ll l1, l2, r1, r2, k, du = 0;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    ll minn, maxx;
    minn = max(l1, l2);
    maxx = min(r1, r2);
    // cout << (maxx - minn + 1) ;
    // cout << minn << " " << minn << endl;
    if(k >= minn && k <= maxx){
       du = 1;
    }
    ll p = (maxx - minn + 1) - du; 
    if(p < 0) cout << "0";
    else cout << p;
    // cout << (maxx - minn + 1) - du; 
}
