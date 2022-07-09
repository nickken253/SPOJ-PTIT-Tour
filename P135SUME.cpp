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
    int a[8], dem = 0;
    for(int i = 0; i < 8; i ++){
        cin >> a[i];
    }
    for(int i = 0; i < 7; i ++){
        if(a[i] < a[i + 1]) dem ++;
        else dem--;
    }
    if(dem == 7) cout << "ascending";
    else if(dem == -7) cout << "descending";
    else cout << "mixed";
}
    
