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
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'a' || a[i] == 'o' || a[i] == 'u' || a[i] == 'e' || a[i] == 'i' || a[i] == 'y'){
            a.erase(i, 1);
            i--;
        }
        else{
            cout << "." << a[i];
        }
    }
}
