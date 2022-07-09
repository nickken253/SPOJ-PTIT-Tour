#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ts[110] = {};
        for(int i = 0; i < n; i++){
            int a;
            cin >> a;
            ts[a]++;
            // cout << a << " ";
        }
        // cout << endl;
        int dem = 0;
        for(int i = 0; i < 110; i++){
            if(ts[i] > 1){
                dem += (ts[i] / 2);
                // cout << i << " ";
            }
        }
        // cout << endl;
        // cout << "c: " << ts[9] << endl;
        // cout << dem << endl;
        if(dem % 2 == 0) cout << dem / 2;
        else cout << (dem - 1) / 2;
        cout << endl;
    }
}
