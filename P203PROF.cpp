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
    ll n, sum = 0, minn = INT_MAX;
    cin >> n;
    while(n--){
        ll a;
        cin >> a;
        sum += a;
        if(a % 2 != 0){
            minn = min(minn, a);
        }
    }
    if(minn == INT_MAX) minn = 0;
    if(sum % 2 == 0){
        if(minn == 0) cout << "0";
        else cout << sum - minn;
    }
    else cout << sum;
}
