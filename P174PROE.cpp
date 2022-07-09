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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem = 1;
    vector<int> ss;
    sort(a, a + n);
    ss.emplace_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]){
            dem ++;
            ss.emplace_back(a[i]);
            // cout << a[i] << endl;
        }
        if(dem == 4){
            cout << "NO";
            return 0;
        }
    }
    if(dem < 3){
        cout << "YES";
        return 0;
    }
    else{
        sort(ss.begin(), ss.end());
        // for(auto i : ss) cout << i << " ";
        // cout << endl;
        if((ss[1] - ss[0]) == (ss[2] - ss[1])){
            cout << "YES";
            return 0;
        }
        else{
            cout << "NO";
            return 0;
        }
    }
}
