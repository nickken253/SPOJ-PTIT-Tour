#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
bool cmp(string a, string b){
    return a + b < b + a;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}
