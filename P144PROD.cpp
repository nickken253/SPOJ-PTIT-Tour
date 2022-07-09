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
    int n, k = 1;
    do{
        cin >> n;
        if(n == 0) break;
        string a[n];
        int maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            int k = a[i].size();
            maxx = max(maxx, k);
        }
        for(int i = 0; i < n; i++){
            while(a[i].size() < maxx) a[i] = '0' + a[i];
        }
        sort(a, a + n);
        cout << "Case " << k << ": ";
        if(a[0] != a[n - 1]){
            while(a[0][0] == '0') a[0].erase(a->begin());
            while(a[n - 1][0] == '0') a[n - 1].erase(a->begin());
            cout << a[0] << " " << a[n - 1];
        }
        else cout << "There is a row of trees having equal height.";
        cout << endl;
        k++;
    }
    while(true);
}
