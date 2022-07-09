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
        int check = 0;
        cin >> a;
        string b = a;
        reverse(b.begin(), b.end());
        for(int i = 1; i < a.size(); i++){
            if(abs(a[i] - a[i - 1]) != abs(b[i] - b[i - 1])){
                cout << "NO";
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "YES";
        cout << endl;
    }
}
