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
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        b[0] = a[0] * a[1];
        b[n - 1] = a[n - 1] * a[n - 2];
        for(int i = 1; i < n - 1; i ++){
            b[i] = a[i - 1] * a[i + 1];
        }
        for(int i = 0; i < n; i ++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
}