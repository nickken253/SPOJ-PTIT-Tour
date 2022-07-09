#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
//#define for(i,a,b) for(int i = a; i < b; i++)


int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        cin >> a;
        int sum = 0;
        for(int i = 0; i < a.size(); i++){
            sum += (a[i] - '0');
        }
        if(sum % 9 == 0 && (a.back() - '0') % 2 == 0){
            if(a.back() == '2' || a.back() == '6'){
                a.erase(a.size() - 1, 1);
                if((a.back() - '0') % 2 != 0){
                    cout << "YES";
                }
                else{
                    cout << "NO";
                }
            }
            else{
                a.erase(a.size() - 1, 1);
                if((a.back() - '0') % 2 == 0){
                    cout << "YES";
                }
                else{
                    cout << "NO";
                }
            }
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
}

// 3 56 12 45
// 56 + 45 + 12 - 3
