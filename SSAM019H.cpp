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
        string a;
        int ans = 0, n;
        cin >> a;
        int m = a.size();
        if(a.size() <= 1){
            n = (a[0] - '0');
        }
        else{
            n = (a[m - 2] - '0') * 10 + (a[m - 1] - '0');
        }
        if(n % 4 == 0){
            ans = 4;
        }
        cout << ans << endl;
    }
}

