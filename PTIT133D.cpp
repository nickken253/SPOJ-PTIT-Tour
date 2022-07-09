#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double
 
int main()
{
    faster;
    // ll a[16] = {1, 4, 16, 64, 256, 1024, 4096, 16384, 65536, 262144, 1048576, 4194304, 16777216, 67108864, 268435456, 1073741824};
    string s;
    ll n;
    do{
        cin >> s;
        if(s == "[END]") break;
        cin >> n;
    //     int dem = 0;
    //     for(int i = 15; i >= 0; i--){
    //         while(n >= a[i]){
    //             dem++;
    //             int tmp = n - a[i];
    //             if(tmp != 1){
    //                 for(int j = 15; j >= 0; j--){
    //                     if(tmp == a[i] ) i--;
    //                 }
    //             }
    //             n -= a[i];
    //             cout << a[i] << " ";
    //         }
    //     }
    //     if(dem % 2 == 0) cout << "Hanako";
    //     else cout << "Taro";
    //     cout << endl;
        if(n % 5 == 0 || n % 5 == 2) cout << "Hanako";
        else cout << "Taro";
        cout << endl;
    }
    while(true);
}
