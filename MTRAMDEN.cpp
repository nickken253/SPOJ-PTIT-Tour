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
    for(ll i = 1; i <= 100; i++){
        for(ll j = i; j <= 100; j++){
            ll n = (i * j + (i + 1) * ( j + 1));
            if(n / 2 == 366){
                cout << i << " " << j << ": " << n / 2 << " - ";
                cout << (i + i + j + j) << endl;
            }
            // if((n / 2) == 9501765529){
            //     cout << i << " " << j << ": " << n / 2 << endl;
            // }
            // cout << i << " " << j << ": " << n << endl;
        }
        // ll n = (i * (i + 1) + (i + 1) * ( i + 2));
        // cout << i << " " << i + 1 << ": " << n / 2 << endl;
    }
    // ll i = 97476;
    // ll n = (i * (i + 1) + (i + 1) * ( i + 2));
    // cout << i << " " << i + 1 << ": " << n / 2 << endl;
}