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
    int n, m;
    cin >> n >> m;
    int k = 1;
    while(true){
        n--, m--;
        if(n == 0 || m == 0){
            if(k % 2 == 0) cout << "Wilshere";
            else cout << "Xavi";
            return 0;
        }
        k++;
    }
}
