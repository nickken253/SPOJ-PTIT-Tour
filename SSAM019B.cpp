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
    while(t--){
        int n, maxx = INT_MIN, check = 0;
        cin >> n;
        unordered_map<int,int> a;
        map<int,int> dem;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            maxx = max(maxx, a[i]);
            dem[a[i]] ++;
        }
        for(int i = 0; i < n; i++){
            if(dem[a[i]] > 1){
                cout << a[i] << " ";
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "NO";
        }
        cout << endl;
    }
}