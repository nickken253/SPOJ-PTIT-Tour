#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
//NOT_DONE__________________
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        int check = 0, maxx = INT_MIN, pos;
        cin >> a;
        for(int i = a.size() - 1; i >= 0; i--){
            if(a[i] > a[i - 1]){
                if(maxx < a[i]){
                    maxx = a[i];
                    pos = i;
                }
            }
            if(a[i - 1] > a[pos]){
                char tmp = a[pos];
                a[pos] = a[i - 1];
                a[i - 1] = tmp;
                check = 1;
                break;
            }
        }
        if(check == 0 || a[0] == '0'){
            cout << "-1";
        }
        else{
            cout << a;
        }
        cout << endl;
    }
}

