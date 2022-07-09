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
    int a1, a2, b1, b2, a[3];
    cin >> a1 >> a2 >> b1 >> b2 >> a[0] >> a[1] >> a[2];
    int dem1 = 0, dem2 = 0;
    int check[1005] = {};
    
    for(int i = 1; i < 1000; i++){
        check[i]++;
        dem1++;
        if(dem1 == a1){
            i += a2;
            dem1 = 0;
        }
    }
    for(int i = 1; i < 1000; i++){
        check[i]++;
        dem2++;
        if(dem2 == b1){
            i += b2;
            dem2 = 0;
        }
    }
    // for(int i = 1; i < 15; i++){
    //     cout << i << " ";
    // }
    // cout << endl;
    // for(int i = 1; i < 15; i++){
    //     cout << check1[i] << " ";
    // }
    // cout << endl;
    // for(int i = 1; i < 15; i++){
    //     cout << check2[i] << " ";
    // }
    
    for(int i = 0; i < 3; i++){
        if(check[a[i]] == 2) cout << "both";
        if(check[a[i]] == 1) cout << "one";
        if(check[a[i]] == 0) cout << "none";
        cout << endl;
    }
}
