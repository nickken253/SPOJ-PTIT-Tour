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
    int n, b;
    cin >> n >> b;
    vector<pair<int,int>> ss(n);
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        ss[i].first = x + y;  
        ss[i].second = x / 2;
    }
    sort(ss.begin(), ss.end());
    // for(int i = 0; i < n; i++){
    //     cout << ss[i].first << " " << ss[i].second << endl;
    // }
    int dem = 0;
    for(int i = 0; i < n; i++){
        if(b >= ss[i].first){
            dem++;
            b -= ss[i].first;
        }
        else{
            int maxx = ss[i].second;
            for(int j = i; j >= 0; j--){
                maxx = max(maxx, ss[j].second);
            }
            b += maxx;
            if(b >= ss[i].first){
                dem++;
                b -= ss[i].first;
            }
            else{
                break;
            }
        }
    }
    cout << dem;
}
