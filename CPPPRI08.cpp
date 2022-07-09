#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int cnt(int n, int p){
    int dem = 0;
    for(int j = p; j <= n; j+=p){
        int k = j;
        while(k % p == 0){
            // cout << k << endl;
            dem++;
            k /= p;
        }
    }
    return dem;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n, p;
        cin >> n >> p;
        cout << cnt(n, p) << endl;
    }
    
}
