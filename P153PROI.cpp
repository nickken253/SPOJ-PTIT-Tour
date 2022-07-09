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
    while(t--){
        string a, b;
        getline(cin, a);
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        int check[27] = {}, dem = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == ' ') continue;
            if(check[a[i] - 'a'] == 0){
                b = b + a[i];
            }
            check[a[i] - 'a']++;
        }
        for(int i = 0; i < 27; i++){
            if(check[i] > 1) dem += check[i];
        }
        cout << dem << " " << b << endl;
    }
}
