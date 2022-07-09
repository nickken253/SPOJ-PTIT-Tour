#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct data{
    ll dai = 0, tong = 0;
};
int main()
{
    faster;
    ll n, m;
    cin >> n >> m;
    ll a[n], maxx = INT_MIN, maxxDai = INT_MIN;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    for(ll i = 0; i < n; i++){
        a[i] -= maxx;
    }
    data b[100005];
    ll j = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] >= 0){
            b[j].dai++;
            b[j].tong += a[i] + maxx;
        }
        else j++;
    }
    maxx = INT_MIN;
    ll maxxx = 0;
    for(ll i = 0; i <= j; i++){
        if(maxx <= b[i].tong && maxxDai <= b[i].dai){
            maxx = b[i].tong;
            maxxDai = b[i].dai;
            if(maxxDai != 0){
                ll k = b[i].tong / b[i].dai;
                if(k >= m){
                    maxxx = k;
                }
            }
            
        }
        
    }
    // cout << maxx / maxxDai << endl;
    cout << maxxx;
}