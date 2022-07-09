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
    int n, dem = 0, k = 1, i = 0;
    cin >> n;
    int a[10005] = {};
    a[1] = 1;
    while(true){
        // cout << n << endl;
        if(n - a[i] < 0){
            dem--;
            break;
        }
        n -= a[i];
        dem++;
        i++;
        a[i] = a[i - 1] + k;
        k++;
    }
    cout << dem;
}
