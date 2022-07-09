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
    int a, b, v;
    cin >> a >> b >> v;
    if(a == v) cout << "1";
    else if((v - b) % (a - b) == 0) cout << (v - b) / (a - b);
    else cout << (v - b) / (a - b) + 1;
}
