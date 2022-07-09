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
        vector<int> tu(n + 10, 0); 
        for(int i = 1; i <= n; i++){
            for(int j = i * 2; j <= n; j += i){
                if(tu[j] == 0) tu[j] = 1;
                else tu[j] = 0;
            }
        }
        int dem = 0;
        for(int i = 1; i < n; i++){
            if(tu[i] == 0){
                dem ++;
            }
        }
        if(ceil(sqrt(n)) * ceil(sqrt(n)) == n){
            dem ++;
        }
        cout << dem << endl;
    }
}
