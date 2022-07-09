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
    int n, dem = 0;
    cin >> n;
    while(n --){
        int a, b;
        cin >> a >> b;
        if(b - a >= 2) dem++;
    }
    cout << dem;
}
