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
    int t;
    cin >> t;
    while(t--){
        ll a, b, c;
        cin >> a >> b >> c; 
        ll maxx = max(a, max(b,c));
        ll minn = min(a, min(b,c));
        cout << maxx - minn << endl;
    }
    
}
