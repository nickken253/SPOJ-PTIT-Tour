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
    string b = a;
    for(int i = 0; i < a.size() - 2; i++){
        for(int j = i + 1; j < a.size() - 1; j++){
            string c = "";
            for(int k = i; k >= 0; k--){
                c += a[k];
            }
            for(int k = j; k > i; k--){
                c += a[k];
            }
            for(int k = a.size() - 1; k > j; k--){
                c += a[k];
            }
            if(c < b) b = c;
        }
    }
    cout << b;
}
