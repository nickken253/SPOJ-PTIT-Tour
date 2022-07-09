#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll big = 1000000007;
ll lt(ll a, ll b){
    if(b == 0) return 1;
    if(b % 2 == 0){
        ll c = lt(a, b / 2);
        return (c * c) % big;
    }
    else{
        ll c = lt(a, b - 1);
        return (c * a) % big;
    }
}
int main()
{
    faster;
    ll a, b;
    do{
        cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << lt(a, b) << endl;
    }
    while(true);
    
}
