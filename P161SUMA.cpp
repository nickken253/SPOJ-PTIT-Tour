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
    ll a, b;
    cin >> a >> b;
    ll dem = 0;
    while(b != 0){
        dem += a / b;
        ll tmp = a % b;
        a = b;
        b = tmp;
    } 
    cout << dem;
}
