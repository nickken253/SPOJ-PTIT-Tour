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
    int n;
    cin >> n;
    if(n == 0 || n == 1){
        cout << 0;
        return 0;
    }
    int a[n], posmin, posmax, minn = INT_MAX, maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(minn > a[i]){
            minn = a[i];
            posmin = i;
        }
        if(maxx < a[i]){
            maxx = a[i];
            posmax = i;
        }
        
    }
    // cout << posmax << " " << posmin << endl;
    if(posmin < posmax){
        cout << max(posmax, n - 1 - posmin);
    }
    else cout << max(posmin, n - posmax - 1);
}