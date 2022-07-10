#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll chiaDu(string a, ll b){
    ll c = 0;
    for(int i = 0; i < a.size(); i++){
        c = ( c * 10 + (ll)(a[i] - '0')) % b;
    }
    return c;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        ll b;
        cin >> a >> b;
        ll c = chiaDu(a, b);
        cout << c << endl;
    }
}