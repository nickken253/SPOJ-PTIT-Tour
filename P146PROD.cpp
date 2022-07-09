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
    int n, dem1 = 0;
    cin >> n;
    while(n--){
        int a, dem2 = 0;
        int b = 3;
        while(b--){
            cin >> a;
            if(a == 1) dem2 ++;
        }
        if(dem2 >= 2) dem1 ++;
    }
    cout << dem1;
}
