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
    string a;
    cin >> a;
    ll n = a.size();
    ll dem = 0;
    ll sum = 0;
    for(ll i = 0; i < n; i++){
        if(a[i] == '2'){
            sum += dem;
        }
        if(a[i] == '1'){
            dem++;
        }
    }
    cout << sum;
}
