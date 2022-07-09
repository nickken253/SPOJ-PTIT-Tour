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
    ll big = 1000007;
    ll a, b;
    cin >> a >> b; 
    vector<ll> ss(b + 10, 0);
    for(ll i = 1; i <= b; i++){
        for(ll j = i; j <= b; j += i){
            ss[j] -= i;
        }
    }
    for(ll i = 1; i <= b; i++){
        ss[i] += 2 * i;
    }
    ll sum = 0;
    for(ll i = a; i <= b; i++){
        sum += abs(ss[i]);
        // cout << abs(ss[i]) << " ";
    }
    cout << sum;
}
