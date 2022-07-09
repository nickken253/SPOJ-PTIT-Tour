#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct cmp{
	bool operator() (ll a,ll b) {return a>b;}
};
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        int check = 0;
        cin >> a;
        for(int i = 0; i < a.size(); i++){
            if(((i + 1) % 2 != 0 && (a[i] - '0') % 2 != 0) || ((i + 1) % 2 == 0 && (a[i] - '0') % 2 == 0)){
                continue;
            }
            else{
                cout << "NO";
                check = 1;
                break;
            }
            
        }
        if(check == 0){
                cout << "YES";
            }
        cout << endl;
    }
}

// 3 56 12 45
// 56 + 45 + 12 - 3
