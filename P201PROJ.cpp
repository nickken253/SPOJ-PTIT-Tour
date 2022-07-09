#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        string c = to_string(b);
        cout << a * (c.size() - 1) << endl;
    }
}
