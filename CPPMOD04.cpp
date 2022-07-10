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
    ll big = 100000;
    faster;
    int t;
    cin >> t;
    map<ll, ll> check;
    // check[2] += 4;
    // cout << check[2];
    for(ll i = 1; i * i <= big; i++){
        for(ll j = 2 * i; j <= big; j += i){
           check[j] += i;     
        }
    }
    while(t--){
        ll n;
        cin >> n;
        cout << check[8128];
    }
}