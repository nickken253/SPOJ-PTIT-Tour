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
    int ts[5005] = {};
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        ts[a] ++;
    }
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        if(ts[i] == 0) cnt ++;
    }
    cout << cnt;
}
