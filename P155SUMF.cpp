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
    int b[n + 1], a[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> b[i];
        b[i] *= i;
    }
    a[1] = b[1];
    for(int i = 2; i <= n; i++){
        a[i] = b[i] - b[i - 1];
    }
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
}

