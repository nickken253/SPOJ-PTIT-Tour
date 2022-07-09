#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int dem = 0;
int a[105];
void cnt(int pos, int n, int k, int dem2){
    if(dem2 == k) dem++;
    else{
        for(int i = pos + 1; i < n; i++){
            if(a[pos] < a[i]){
                cnt(i, n, k, dem2 + 1);
            }
            else continue;
        }
    }
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        dem = 0;
        int n, k;
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n; i++){
            cnt(i, n, k, 1);
        }
        cout << dem << endl;
    }
}
