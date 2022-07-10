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
    ll big = 10004;
    faster;
    int t;
    cin >> t;
    while(t--){
        ll n, dem = 0;
        cin >> n;
        string a[n], sos;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] == "0"){
                dem ++;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] != "0"){
                cout << a[i] << " ";
            }
        }
        for(int i = 0; i < dem; i++){
            cout << "0 ";
        }
        cout << endl;
    }
}