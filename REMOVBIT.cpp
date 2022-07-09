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
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(i == a.size() - 1){
            a.erase(a.size() - 1, 1);
            cout << a;
            return 0;
        }
        else{
            if(a[i] == '0'){
                a.erase(i,1);
                cout << a;
                return 0;
            }
        }
    }
}
