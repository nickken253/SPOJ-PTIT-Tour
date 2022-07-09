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
    int a[3001] = {};
    for(int i = 0; i < n; i ++){
        int b;
        cin >> b;
        a[b] ++;
    }
    for(int i = 1; i < 3001; i ++){
        if(a[i] == 0){
            cout << i;
            return 0;
        }
    }
    cout << n + 1;
}
