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
    int r, c;
    cin >> r >> c;
    char a[r][c];
    string minn = "zzzzzzzzzzzzzzzzzzzzzzzzz";
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            string b = "";
            // cout << "check3" << endl;
            for(int k = j; k < c; k++){
                // cout << "checkFor" << endl;
                if(a[i][k] == '#'){
                    // if(b.size() < 2) break;
                    // if(b < minn) minn = b; 
                    break;
                }
                else{
                    b = b + a[i][k];
                    j++;
                }
            } 
            if(b.size() >= 2 && b < minn) minn = b; 
            // cout << b << " " << minn << endl;
        }
    }
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            string b = "";
            // cout << "check3" << endl;
            for(int k = j; k < r; k++){
                // cout << "checkFor" << endl;
                if(a[k][i] == '#'){
                    // if(b.size() < 2) break;
                    // if(b < minn) minn = b; 
                    break;
                }
                else{
                    b = b + a[k][i];
                    j++;
                }
            } 
            if(b.size() >= 2 && b < minn) minn = b; 
            // cout << b << " " << minn << endl;
        }
    }
    cout << minn;
    
}
