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
    int ts[2] = {};
    while(n--){
        int a;
        cin >> a;
        ts[a]++;
    }
    if(ts[0] == 1) cout << "YES";
    else cout << "NO";
}
