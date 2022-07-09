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
    int n, m;
    cin >> n >> m;
    int a[n], b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] % m == 0){
            cout << "Yes";
            return 0;
        }
        if(i == 0) b[i] = a[i];
        else b[i] = b[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++){
        if(b[i] % m == 0){
            cout << "Yes";
            return 0;
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n - 1; j++){
            if((b[j] - a[i]) % m == 0){
                cout << "Yes";
                return 0;
            }
        }
    }
    cout << "No";
}