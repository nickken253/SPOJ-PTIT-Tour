#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct cmp{
	bool operator() (ll a,ll b) {return a>b;}
};
int main(){
    faster;
    ll n, k;
    cin >> n >> k;
    multiset<ll, cmp> chuoi;
    ll a, b;
    cin >> b;
    for(ll i = 0; i < n - 1; i++){
        cin >> a;
        chuoi.insert(a);
    }
    ll sum = b;
    for(ll i : chuoi){
        if(k > 0){
            sum += i;
            k--;
        }
        else{
            sum -= i;
        }
    }
    cout << sum << endl;
}

// 3 56 12 45
// 56 + 45 + 12 - 3
