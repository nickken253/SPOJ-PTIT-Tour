#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
//#define for(i,a,b) for(int i = a; i < b; i++)

ll dn(ll n){
    ll sum = 0;
    for(ll i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            sum += (i + (n / i));
        }
    }
    if(floor(sqrt(n)) * floor(sqrt(n)) == n){
        sum += sqrt(n);
    }
    return sum;
}
int main(){
    faster;
    ll t;
    cin >> t;
    ll a[32];
    a[0] = 1;
    for(ll i = 1; i <= 31; i ++){
        a[i] = a[i - 1] * 2;
    }
    while(t--){
        ll n, check = 0;
        cin >> n;
        if(dn(dn(n)) == 2 * n){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        // for(ll i = 0; i < 32; i += 2){
        //     if(sum + 1 == a[i] * 2){
        //         cout << "YES";
        //         check = 1;
        //         break;
        //     }
        // }
        // if(check == 0){
        //     cout << "NO";
        // }
        cout << endl;
    }
}

