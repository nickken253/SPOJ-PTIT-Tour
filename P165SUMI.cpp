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
    ll n;
    cin >> n;
    if(n % 2 == 0){
       ll am = (n + 2) * (n / 2) / 2; 
       ll duong = -n * n / 4;
       cout << am + duong;
    }
    else{
        ll am = (n + 1) * (n / 2) / 2;
        ll duong = -(n + 1) * (n / 2 + 1) / 2;
        cout << am + duong;
    }
}
