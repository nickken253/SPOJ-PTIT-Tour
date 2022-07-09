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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 0, maxx = INT_MIN;
    for(int i = 0; i < n; i++){
        maxx = max(maxx, a[i]);
        if(maxx == i + 1) dem++;
    }
    cout << dem;
}