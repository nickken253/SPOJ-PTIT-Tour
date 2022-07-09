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
        cin.ignore();
        string a, b = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ_";
        cin >> a;
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] >= 'A' && a[i] <= 'Z'){
                cout << b[(a[i] - 'A' + 1 + n) % 28];
            }
            else{
                if(a[i] == '_') cout << b[(a[i] - 97 + 1 + n) % 28];
                else cout << b[(a[i] - 47 + 1 + n) % 28];
            }
        }
        cout << endl;
    }
    while(true);
}
