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
    int n, dem = 1, maxx = dem;
    cin >> n;
    vector<int> a(n + 5);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n - 1; i++){
        if(a[i] <= a[i + 1]){
            dem ++;
            maxx = max(maxx, dem);
        }
        else{
            dem = 1;
        }
    }
    cout << maxx;
}
