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
    int n, x, dem = 0;
    cin >> n >> x;
    for(int i = 1; i <= n; i++){
        if(x % i == 0){
            if(x / i <= n) dem ++;
        }
    }
    cout << dem;
}
