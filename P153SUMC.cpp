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
    ll n, m, p, kq;
    cin >> n >> m >> p;
    int k = 2;
    while(k != p){
        kq = m - n;
        k++;
        n = m;
        m = kq;
    }
    cout << kq;
}
