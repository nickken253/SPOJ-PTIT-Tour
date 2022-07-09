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
        string a;
        int dem = 1;
        cin >> a;
        a += 'a';
        for(int i = 0; i < a.size() - 1; i++){
            if(a[i] == a[i + 1]) dem++;
            else{
                cout << dem << a[i];
                dem = 1;
            }
        }
        cout << endl;
    }
}
