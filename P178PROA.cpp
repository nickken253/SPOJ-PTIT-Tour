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
    while(true){
        cin >> n;
        if(n == 0) break; 
        if(n < 1000000) cout << n;
        else if(n <= 5000000) cout << n / 100 * 90;
        else cout << n / 100 * 80;
        cout << endl;
    }
}
