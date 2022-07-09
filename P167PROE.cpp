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
    ll t;
    cin >> t;
    while(t--){
        ll n, m = 0, dem = 1, d = 1;
        cin >> n;
        // n *= n;
        for(int i = 2; i * i <= n; i++){
            if(n % i == 0){
                int k = 0;
                while(n % i == 0){
                    // dem += 2;
                    k++;
                    n /= i;
                }
                d *= 2 * k + 1;
            }
        }
        if(n > 1) d *= 3;
        cout << d << endl;
    }
}
