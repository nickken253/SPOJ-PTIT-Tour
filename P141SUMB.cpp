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
    int a[5005] = {};
    for(int i = 0; i < n; i++){
        int c;
        cin >> c;
        a[c] ++;
    }
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 0) dem++;
    }
    cout << dem;
}
