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
    sort(a, a + n);
    vector<int> ss;
    int dem = 1;
    ss.emplace_back(a[0]);
    for(int i = 1; i < n; i++){
        if(a[i] != a[i - 1]){
            dem++;
            ss.emplace_back(a[i]);
        }
        if(dem == 4){
            cout << "NO";
            return 0;
        }
    }
    if(dem < 3) cout << "YES";
    else{
        sort(ss.begin(), ss.end());
        if((ss[1] - ss[0]) == (ss[2] - ss[1])) cout << "YES";
        else cout << "NO";
    }
}
