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
    int c, v0, v1, a, l;
    cin >> c >> v0 >> v1 >> a >> l;
    int cnt = 1;
    c -= v0;
    while(true){
        if(c <= 0){
            cout << cnt;
            return 0;
        }
        cnt ++;
        v0 += a;
        v0 = min(v0, v1);
        c = c - v0 + l;
    }
    cout << cnt;
}
