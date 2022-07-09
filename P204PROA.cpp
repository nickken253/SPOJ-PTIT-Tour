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
    ull n, a, b, c, dem = 0;
    cin >> n >> a >> b >> c;
    ull m = n;
    while(n >= b){
        n = n - b + c;
        dem++;
    }
    if(n >= a) dem += (n / a);
    cout << max(dem, m / a);
}
