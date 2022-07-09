#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

int main()
{
    faster;
    int t, sumU = 0, sumD = 0, minU = INT_MAX, minD = INT_MAX;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        sumU += a;
        sumD += b;
        minU = min(minU, a);
        minD = min(minD, b);
    }
    sumU += minD;
    sumD += minU;
    cout << max(sumU, sumD);
}
