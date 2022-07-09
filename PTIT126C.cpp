
#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

// NOT_DONE____________________
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        ll n, m;
        cin >> n >> m;
        ll a[n];
        ll sum = 0, maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            sum = max(a[i], sum + a[i]);
            maxx = max(sum, maxx);
        }
        cout << maxx << endl;
    }
}
