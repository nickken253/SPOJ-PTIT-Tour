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
        int n;
        cin >> n;
        float alp = 2.0 / ( 1.0 - n * 1.0/ 180);
        if(ceil(alp) == (int)alp) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}