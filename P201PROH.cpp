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
        int a, b;
        cin >> a >> b;
        if((a == 1 && b > 1) || (a == 3 && b > 3)){
            cout << "NO";
        }
        else cout << "YES";
        cout << endl;
    }
}
