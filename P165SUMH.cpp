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
    string a;
    cin >> a;
    string d = a;
    reverse(d.begin(), d.end());
    while(t--){
        string b, c;
        cin >> b; 
        c = b;
        reverse(c.begin(), c.end());
        int check = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == '*') break;
            if(a[i] != b[i]){
                check = 1;
                break;
            }
        }
        for(int i = 0; i < d.size(); i++){
            if(d[i] == '*') break;
            if(d[i] != c[i]){
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "DA";
        else cout << "NE";
        cout << endl;
    }
}
