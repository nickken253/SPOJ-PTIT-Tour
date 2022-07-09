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
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> check;
        int dem0 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        a.emplace_back(0);
        for(int i = 0; i < n; i++){
            if(a[i] != 0){
                if(a[i + 1] != 0 && a[i] == a[i + 1]){
                    a[i] *= 2;
                    a[i + 1] = 0;
                    
                }
                check.emplace_back(a[i]);
            }
            else{
                dem0++;
                
            }
        }
        for(int i = 0; i < check.size(); i++) cout << check[i] << " ";
        while(dem0--) cout << "0 ";
        cout << endl;
    }
}
