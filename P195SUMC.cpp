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
    if(a[0] != 25){
        cout << "NO";
        return 0;
    }
    int sum = a[0];
    for(int i = 1; i < n; i++){
        if(a[i] <= sum){
            sum += ;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
