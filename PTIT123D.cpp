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
    do{
        cin >> n;
        long double kq = 1;
        long double m = 2 * n;
        if(n == 0) break;
        for(double i = n; i > 1; i--){
            // cout << m << " " << i << " ";
            kq = (kq * m * 1.0) / i;
            // cout << kq << endl;
            m--;
        }
        cout << setprecision(0) << fixed << kq << endl;
    }
    while(true);
}
