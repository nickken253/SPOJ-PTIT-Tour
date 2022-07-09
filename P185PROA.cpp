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
        cin >> a;
        string m = a;
        for(int i = 0; i < a.size(); i++){
            if(('9' - a[i]) < a[i] - '0'){
                m[i] = ('9' - a[i]) + '0';
                // cout << a[i] << " " << '9' - a[i] << endl;
            }
        }
        if(m[0] == '0') m[0] = '9';
        cout << m << endl;
    }
}
