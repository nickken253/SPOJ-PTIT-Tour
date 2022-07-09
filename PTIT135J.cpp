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
    int t;
    cin >> t;
    while(t--){
        double a, b, c;
        cin >> a >> b >> c;
        cout << ceil((log(c * 1.0 / a) / log(1 + b * 1.0 / 100))) << endl;
    }
}
