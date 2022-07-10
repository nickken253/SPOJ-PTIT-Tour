#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
// TÍNH CẢ CÁC SỐ TRÙNG NHAU
int main()
{
    ll big = 10004;
    faster;
    int t;
    cin >> t;
    while(t--){
        vector<int> check(big, 0);
        int n;
        cin >> n;
        vector<int> a(n, 0);
        for(int i = 0; i < n; i++){
            cin >> a[i];
            check[a[i]] ++;
        }
        int k = 0;
        for(int i = 0; i < big; i++){
            while(check[i] != 0){
                a[k] = i;
                k ++;
                check[i] --;
            }
        }
        for(int i = 0; i < ceil(n * 1.0 / 2); i++){
            if(n - i - 1 == i){
                cout << a[i] << " ";
            }
            else{
                cout << a[n - i - 1] << " " << a[i] << " ";
            }
        }
        cout << endl;
    }
}