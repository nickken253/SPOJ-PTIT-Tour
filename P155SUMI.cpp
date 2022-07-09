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
    int n, m;
    cin >> n >> m;
    int a[m];
    for(int i = 0; i < m; i++){
        cin >> a[i];
    }
    sort(a, a + m);
    int minn = INT_MAX, sum;
    for(int i = 0; i <= m - n; i++){
        sum = a[i + n - 1] - a[i];
        if(sum < minn){
            minn = sum;
        }
    }
    cout << minn;
}