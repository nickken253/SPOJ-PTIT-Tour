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
    int n, maxx = INT_MIN;
    cin >> n;
    int a[24][60] = {};
    while(n --){
        int hh, mm;
        cin >> hh >> mm;
        a[hh][mm] ++;
        maxx = max(maxx, a[hh][mm]);
    }
    cout << maxx;
}
