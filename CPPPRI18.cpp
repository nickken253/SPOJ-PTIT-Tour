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
        int n, m, a, b, dem = 0;
        cin >> n >> m >> a >> b;
        for(int i = n; i <= m; i++){
            if(i % a == 0 || i % b == 0) dem++;
        }
        cout << dem << endl;
    }
}
