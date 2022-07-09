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
        int n, m;
        cin >> n;
        m = ceil(n * 1.0 / 4);
        for(int i = 0; i < n - m; i++) cout << 9;
        for(int i = 0; i < m; i++) cout << 8;
        cout << endl;
    }
}

