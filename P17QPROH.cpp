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
    int t, k = 1;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        ll a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += a[i] * b[i];
        }
        cout << "Case #" << k << ": ";
        k++;
        cout << sum << endl;
    }
}
