#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

// hàm cmp mới !!!
bool cmp(ll a, ll b){
    ll n, m;
    n = m = 10;
    while(a / n > 0) n *= 10;
    while(b / m > 0) m *= 10;
    return a * m + b > b * n + a;
}
int main()
{
    faster;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for (ll i = 0; i < n; i++)
        {
            cout << a[i];
        }
        cout << endl;  
    }
}