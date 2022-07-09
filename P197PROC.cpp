#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int main()
{
    faster;
    int n;
    cin >> n;
    ll a[n], sum = 0, maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum = max(a[i], a[i] + sum);
        maxx = max(maxx, sum);
    }
    cout << maxx;
}
