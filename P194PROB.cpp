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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n == 1){
        cout << 0;
        return 0;
    }
    int maxx = INT_MIN, minn = INT_MAX, posmin, posmax;
    for(int i = 0; i < n; i++){
        if(minn >= a[i]){
            minn = a[i];
            posmin = i;
        }
        if(maxx < a[i]){
            maxx = a[i];
            posmax = i;
        }
    }
    if(posmax < posmin) cout << posmax - 1 + n - posmin;
    else cout << posmax - 2 + n - posmin;
}