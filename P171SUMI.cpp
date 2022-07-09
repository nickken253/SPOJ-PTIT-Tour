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
    cin.ignore();
    while(t--){
        string a;
        cin >> a;
        int ts[27] = {};
        for(int i = 0; i < a.size(); i++){
            ts[a[i] - 'a']++;
        }
        int demL = 0, demC = 0;
        for(int i = 0; i < 27; i++){
            if(ts[i] % 2 == 0) demC ++;
            else demL ++;
        }
        if(demL > 3) cout << "NO";
        else cout << "YES";
        cout << endl;
    }
}
