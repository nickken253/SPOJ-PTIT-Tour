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
    int n, cnt1, cnt2 = 0;
    cin >> n;
    while(true){
        if(n < 4 && n != 0){
            cout << "-1";
            return 0;
        }
        if(n % 7 == 0){
            cnt1 = n / 7;
            break;
        }
        if(n >= 4){
            n -= 4;
            cnt2++;
        }
    }
    while(cnt2--) cout << 4;
    while(cnt1--) cout << 7;
}
