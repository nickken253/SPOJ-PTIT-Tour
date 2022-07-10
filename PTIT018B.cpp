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
        int n, so, check = 0;
        cin >> n;
        int a[n], b[n];
        int ack[1005] = {}, bck[1005] = {};
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ack[a[i]] ++;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i];
            bck[b[i]] ++;
        }
        int k = 0;
        for(int i = 0; i < 1004; i++){
            while(ack[i] > 0){
                a[k] = i;
                k ++;
                ack[i] --;
            }
        }
        k = 0;
        for(int i = 0; i < 1004; i++){
            while(bck[i] > 0){
                b[k] = i;
                k ++;
                bck[i] --;
            }
        }
        for(int i = 0; i < n; i++){
            if(a[i] > b[i]){
                check = 1;
            }
        }
        if(check == 0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}