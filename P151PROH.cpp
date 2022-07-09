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
    int check = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '1'){
            if(a[i + 1] == '4'){
                if(a[i + 2] == '4'){
                    i += 2;
                }
                else{
                    i ++;
                }
            }
        }
        else{
            check = 1;
            cout << "NO";
            break;
        }
    }
    if(check == 0) cout << "YES";   
}
