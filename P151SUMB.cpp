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
    int n, dem = 0;
    cin >> n;
    int dem5 = n / 5;
    // cout << dem5 << " " << ((n - 5 * dem5) / 3) << endl;
    while((n - 5 * dem5) % 3 != 0){
        if(dem5 == 0) break;
        dem5--; 
    }
    // cout << dem5 << " " << ((n - 5 * dem5) / 3) << endl;
    if((n - 5 * dem5) % 3 == 0){
        cout << dem5 + ((n - 5 * dem5) / 3);
    }
    else cout << "-1";
    
}
