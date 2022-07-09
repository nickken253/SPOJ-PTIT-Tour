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
    int t;
    cin >> t;
    while(t--){
        string a;
        ull b, big;
        cin >> a >> b >> big;
        ull sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum = sum * 10 + (a[i] - '0');
            sum = sum % big;
        }
        ull sum2 = sum, kq;
        for(int i = 1; i < b; i++){
            sum2 = (sum2 * sum) % big;
        }
        cout << sum2 << endl;
    }
}
