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
    double sum;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        sum += a * 1.0 / 100;
    }
    cout << setprecision(12) << fixed << sum * 100 / n;
}
