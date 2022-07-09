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
    int dem1 = 0, dem2 = 0;
    for(int i = 0; i < n; i++){
        int a;
        cin >> a;
        if(a == 1) dem1 ++;
        else dem2 ++;
    }
    while(m--){
        int l, r;
        cin >> l >> r;
        int k = r - l + 1;
        if(k % 2 != 0){
            cout << "0";
        }
        else{
            if(dem1 >= k / 2 && dem2 >= k / 2){
                cout << "1";
            }
            else cout << "0";
        }
        cout << endl;
    }
}
