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
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(n % 2 != 0){
        if(a[0] % 2 != 0 && a[n - 1] % 2 != 0){
            cout << "yes";
        }
        else cout << "no";
    }
    else cout << "no";
}
