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
    int n, k, sum = 0;
    cin >> n >> k;
    while(n--){
        int a, b;
        cin >> a >> b;
        sum += b - a + 1;
    }
    if(sum % k != 0){
        int m = sum / k;
        cout << (m + 1) * k - sum;
    }
    else cout << "0";
}
