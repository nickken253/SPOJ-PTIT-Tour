#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


//TLE___________________________________
struct data{
    ll gtri, vo;
};
vector<ll> check(100005, 0);
// data a[100005];
ll sum = 0;
ll tinh(data a[], vector<ll> &check, ll n, ll kq, ll i){
    if(check[i] == 0){
        for(ll j = i + 1; j < n; j++){
            if(kq >= a[j].vo && check[j] == 0){
                kq = a[j].gtri;
                check[j] = 1;
                tinh(a, check, n, kq, j);
            }   
        }
        check[i] = 1;
        return a[i].gtri;
    }
}
bool cmp(data a, data b){
    return a.gtri > b.gtri;
}
int main()
{
    faster;
    ll t;
    cin >> t;
    while(t--){
        ll n, m, sum = 0;
        cin >> n >> m;
        data a[n];
        for(ll i = 0; i < n; i++){
            cin >> a[i].gtri;
            a[i].vo = a[i].gtri + m;
            check[i] = 0;
        }
        sort(a, a + n, cmp);
        for(ll i = 0; i < n; i++){
            sum += tinh(a, check, n, a[i].gtri, i);
            
        }
        cout << sum << endl;
    }
}

