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
    cin >> n;
    cin.ignore();
    while(n--){
        string a;
        getline(cin, a);
        transform(a.begin(), a.end(), a.begin(), ::tolower);
        string m = "";
        for(int i = 0; i < a.size(); i++){
            if(a[i] != ' ') m += a[i];
        }
        m += m[0];
        m.erase(m.begin());
        m[0] -= 32;
        int k = 0;
        for(int i = 0; i < a.size(); i++){
            if(a[i] != ' '){
                cout << m[k];
                k++;
            }
            else cout << " ";
        }
        cout << "ee" << endl;
    }
}
