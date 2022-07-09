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
    int cnt = 1;
    
    while(t--){
        int r, c;
        cin >> r >> c;
        cin.ignore();
        string a;
        cin >> a;
        
        char b[r][c];
        int k = 0;
        for(int i = 0; i < r; i++){
            for(int j = 0; j < c; j++){
                b[i][j] = a[k], k++;
            }
        }
        string mm = "";
        k = 0;
        int d = 0, hang = r - 1, cot = c - 1;
        while(true){
            
            for(int i = d; i <= cot; i++){
                mm += b[d][i];
            }
            if(mm.size() + 1 > a.size()) {
                break;
            }
            for(int i = d + 1; i <= hang; i++){
                mm += b[i][cot];
            }
            if(mm.size() + 1 > a.size()) {
                break;
            }
            for(int i = cot - 1; i >= d; i--){
                mm += b[hang][i];
            }
            if(mm.size() + 1 > a.size()) {
                break;
            }
            for(int i = hang - 1; i > d; i--){
                mm += b[i][d];
            }
            if(mm.size() + 1 > a.size()) {
                break;
            }
            d++;
            hang--;
            cot--;
            
        }
        // for(int i = 0; i < r; i++){
        //     for(int j = 0; j < c; j++){
        //         cout << b[i][j] << " ";
        //     }
        //     cout << endl;
        // }
        // cout << mm << endl;
        cout << cnt << " ";
        while(mm.size() % 5 != 0) mm.erase(mm.size() - 1);
        for(int i = 0; i < mm.size(); i += 5){
            int sum = 0;
            // string dd = "";
            mm[i] == '1' ? sum += 16 : sum += 0;
            mm[i + 1] == '1' ? sum += 8 : sum += 0;
            mm[i + 2] == '1' ? sum += 4 : sum += 0;
            mm[i + 3] == '1' ? sum += 2 : sum += 0;
            mm[i + 4] == '1' ? sum += 1 : sum += 0;
            // dd += mm[i] + mm[i + 1] + mm[i + 2] + mm[i + 3] + mm[i + 4];
            // if(dd !=)
            char kk = sum + 'A' - 1;
            
            if(sum != 0) cout << kk;
            else cout << " ";
            // cout << endl;
            
        }
        cnt ++;
        cout << endl;
    }
}
