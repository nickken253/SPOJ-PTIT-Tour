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
    int n, minn = INT_MAX, maxx = INT_MIN;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
        minn = min(minn, a[i]);
        maxx = max(maxx, b[i]);
    }
    for(int i = 0; i < n; i++){
        if(a[i] == minn){
            if(b[i] == maxx){
                cout << i + 1;
                return 0;
            }
        }
    }
    cout << "-1";
}

for(int i = 0; i < n; i ++)
{
    cin >> a[i];
    b[a[i]] ++;
}
