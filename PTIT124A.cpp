#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


//ĐÚNG NHƯNG CHƯA BIẾT WA Ở ĐÂU
int main()
{
    faster;
    int t, k = 1;
    cin >> t;
    while(t--){
        int r, c;
        string a = "";
        cin >> r >> c;
        getline(cin, a);
        char ft = a[0];
        a.erase(0,1);
        while(a.size() > (r * c) / 5) a.erase(a.size() - 1);
        if(a.size() == 0){
            cout << k << " 0" << endl;
            k++;
            continue;
        }
        string mm = "";
        for(int i = 0; i < a.size(); i++){
            if(a[i] == ' '){
                mm += "00000";
            }
            else{
                int n = 16;
                while((a[i] - 'A' + 1) != 0){
                    if((a[i] - 'A' + 1) >= n){
                        // cout << n << endl;
                        mm += '1';
                        a[i] -= n;
                        n /= 2;
                    }
                    else mm += '0', n /= 2;
                }
            }
            while(mm.size() % 5 != 0) mm += '0';
            // cout << "---" << endl;
            // mm += ' ';
        }
        // cout << mm << endl;
        int b[r][c] = {};
        int d = 0, hang = r - 1, cot = c - 1, dem = 0;
        while(true){
            for(int i = d; i <= cot; i++){
                b[d][i] = mm[dem] - '0';
                dem ++;
                if(dem >= mm.size()) break;
            }
            if(dem >= mm.size()) break;
            for(int i = d + 1; i <= hang; i++){
                b[i][cot] = mm[dem] - '0';
                dem++;
                if(dem >= mm.size()) break;
            }
            if(dem >= mm.size()) break;
            for(int i = cot - 1; i >= d; i--){
                b[hang][i] = mm[dem] - '0';
                dem++;
                if(dem >= mm.size()) break;
            }
            if(dem >= mm.size()) break;
            for(int i = hang - 1; i > d; i--){
                b[i][d] = mm[dem] - '0';
                dem++;
                if(dem >= mm.size()) break;
            }
            if(dem >= mm.size()) break;
            d++;
            hang--;
            cot--;
        }
        cout << k << " ";
        k++;
        for(int i = 0; i < r; i ++){
            for(int j = 0; j < c; j++){
                cout << b[i][j];
            }
            // cout << endl;
        }
        cout << endl;
        
    }
    
}
