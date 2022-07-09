#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


//NOT_DONE______________
ll lt(ll n){
    int sum = 1;
    for(int i = 0; i < n; i++){
        sum *= 2;
    }
    return sum;
}
int main()
{
    faster;
    ll a[31];
    for(ll i = 1; i < 31; i++){
        a[i] = lt(i - 1) * (lt(i) - 1);
    }
    for(ll i = 1; i < 31; i++){
        cout << a[i] << endl;
    }
    int t;
    cin >> t;
    while(t--){
        ll n, check = 0;
        cin >> n;
        for(ll i = 1; i < 31; i++){
            if(n - a[i] == 0){
                cout << "1" << endl;
                check = 1;
                continue;
            }
        }
        if(check == 0) cout << "0" << endl;
    }
    // cout << a[30];
}
