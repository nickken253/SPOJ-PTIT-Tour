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
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n], check[10005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        check[0] = 1;
        for(int i = 0; i < n; i++){
            for(int j = k; j >= a[i]; j--){
                if(check[j - a[i]] == 1) check[j] = 1;
            }
        }
        if(check[k] == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}
