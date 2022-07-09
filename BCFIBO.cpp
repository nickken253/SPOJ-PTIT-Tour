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
    int n, big = 1000000007;
    cin >> n;
    if(n == 0 || n == 1){
        cout << n;
        return 0;
    }
    int f1 = 0, f2= 1, f;
    for(int i = 2; i <= n; i++){
        f = (f1 + f2) % big;
        if(i == n) break;
        f1 = f2;
        f2 = f;
    }
    cout << f;
}