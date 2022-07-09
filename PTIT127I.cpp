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
        if(n == 0) break;
        set<int> ss;
        n *= 6;
        while(n--){
            int a;
            cin >> a;
            ss.insert(a);
        }
        if(ss.size() == 49) cout << "Yes";
        else cout << "No";
        cout << endl;
    }
    while(true);
}
