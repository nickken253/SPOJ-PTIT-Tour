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
    int n;
    cin >> n;
    long long a[n + 1];
    a[0] = 1;
    long long pro = 0;
    for(int i = 1; i<= n; i++){
        a[i] = a[i - 1] * 2;
        pro += a[i];
    }
    cout << pro;
}
