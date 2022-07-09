#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//QUY_HOẠCH_ĐỘNG________
int check[31][31] = {};
int checkk(string a, string b){
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                check[i + 1][j + 1] = check[i][j] + 1;
            }
            else check[i + 1][j + 1] = max(check[i + 1][j], check[i][j + 1]);
        }
    }
    return check[a.size()][b.size()];
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cin.ignore();
        string a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            for(int j = i + 1; j < n; j++){
                for(int m = 0; m < 32; m++){
                    for(int n = 0; n < 32; n++){
                        check[m][n] = 0;
                    }
                }
                maxx = max(maxx, checkk(a[i], a[j]));
            }
        }
        cout << maxx << endl;
    }
}
