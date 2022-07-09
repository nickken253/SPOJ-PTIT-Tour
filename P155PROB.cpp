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
    int n, k;
    cin >> n >> k;
    int a[5];
    for(int i = 0; i < 5; i++){
        cin >> a[i];
    }
    for(int i = 0; i < 5; i++){
        cout << a[i] - n * k << " ";
    }
}
