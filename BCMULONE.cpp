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
        string a = "", b = "";
        int n, check = 0, pos = 3;
        cin >> n;
        for(int i = 1; i <= n; i ++){
            char k = (i % 10) + '0';
            a = a + k;
            if(k != '1'){
                b = k + b;
            }
            if(i % 10 == 0){
                check = 1;
                a.erase(i - pos, 1);
                pos++;
                n++;
            }
            else{
                check = 0;
            }
        }
        b = b + '1';
        if(check == 0){
            b.erase(b.begin());
        }
        cout << a << b << endl;
    }
}