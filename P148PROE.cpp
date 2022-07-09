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
        cin.ignore();
        if(n == 0) break;
        string a, b, c, d = "";
        int dem = 0;
        cin >> a >> b >> c;
        while(true){
            if(d == c){
                cout << dem << endl;
                break;
            }
            d = "";
            if(dem > 50){
                cout << "-1" << endl;
                break;
            }
            for(int i = 0; i < n; i++){
                d = d + b[i] + a[i];
            }
            // cout << d << " ";
            a = "", b = "";
            for(int i = 0; i < n ; i++){
                a = a + d[i];
                b = d[2 * n - i - 1] + b;
            }
            // cout << a << " " << b << endl;
            dem++;
        }
    }
    while(true);
}
