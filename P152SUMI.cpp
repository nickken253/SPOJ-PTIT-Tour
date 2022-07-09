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
    string a;
    int n; 
    cin >> a >> n;
    int m = a.size();
    int dem[m];
    dem[0] = 0;
    for(int i = 0; i < a.size() - 1; i++){
        if(a[i] == a[i + 1]){
            dem[i + 1] = dem[i] + 1;
        }
        else{
            dem[i + 1] = dem[i];
        }
    }
    // cout << dem[4] << endl;
    while(n --){
        int l, r;
        cin >> l >> r;
        // cout << dem[r - 1] << " " << dem[l - 1] << endl;
        cout << dem[r - 1] - dem[l - 1] << endl;
    }
}
