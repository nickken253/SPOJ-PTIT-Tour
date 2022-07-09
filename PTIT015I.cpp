#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n, k, sum = 0, dem = 0;
        cin >> n >> k;
        while(n--){
            int a;
            cin >> a;
            sum += a;
            if(sum <= k){
                dem ++;
            }
        }
        cout << dem << endl;
    }
}
