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
    sort(a, a + n);
    int sum = 0, dem = 0;
    for(int i = 1; i < n; i++){
        sum += a[i - 1];
        if(sum <= a[i]){
            dem++;
        }
        else sum -= a[i];
    }
    cout << dem + 1;
}
