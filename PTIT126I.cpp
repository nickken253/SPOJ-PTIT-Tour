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
    string a, b;
    cin >> a >> b;
    int check = 0, i, j;
    for(i = 0; i < a.size(); i++){
        for(j = 0; j < b.size(); j++){
            if(a[i] == b[j]){
                check = 1;
                break;
            }
        }
        if(check == 1) break;
    }
    int pos1 = i, pos2 = j;

    for(int i = 0; i < b.size(); i++){
        if(i == pos2){
            cout << a << endl;
            
            continue;
        }
        for(int j = 0; j < a.size(); j++){
            if(j == pos1){
                cout << b[i];
            }
            else cout << ".";
            
        }
        cout << endl;
    }
}
