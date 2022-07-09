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
        int a[1001] = {}, b[1001] = {}, maxx = INT_MIN;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[a[i]] ++;
            maxx = max(maxx, b[a[i]]);
        }
        for(int i = 0; i < 1001; i++){
            if(b[i] == maxx){
                cout << i << endl;
                break;
            }
        }
    }
}
