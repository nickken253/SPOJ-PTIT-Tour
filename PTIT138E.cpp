#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[4][4];
int main()
{
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        cin >> a;
        for(int i = a.size() - 2; i >= 0; i--){
            if(a[i + 1] >= '5' && a[i + 1] <= '9'){
                a[i + 1] = '0';
                if(a[i] != '9'){
                    a[i]++;
                }
                else{
                    if(i == 0){
                        a[i] = '0';
                        a = '1' + a;
                    }
                }
            }
            else{
                a[i + 1] = '0';
            }
            // cout << a << endl;
        }
        cout << a << endl;
    }
}
