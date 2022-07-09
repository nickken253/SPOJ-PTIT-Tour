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
    while(cin >> a){
        int dem = 0;
        int dd[27] = {};
        for(int i = 0; i < a.size(); i++){
            dd[a[i] - 'a']++;
        }
        for(int i = 0; i < 27; i++){
            if(dd[i] % 2 != 0){
                dem++;
            } 
        }
        if(dem < 2) cout << "First";
        else if(dem % 2 == 0) cout << "Second";
        else cout << "First";
        cout << endl;
    }
}
