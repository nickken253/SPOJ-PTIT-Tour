#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[4][4];
int main()
{
    faster;
    string a, b;
    int k = 0;
    do{
        int check = 0;
        k++;
        int aa[30] = {}, bb[30] = {};
        cin >> a >> b;
        if(a == "END" && b == "END") break;
        if(a.size() != b.size()){
            cout << "Case " << k << ": different\n";
            continue;
        }
        for(int i = 0; i < a.size(); i++){
            aa[a[i] - 'a']++;
        }
        for(int i = 0; i < b.size(); i++){
            bb[b[i] - 'a']++;
        }
        int i;
        for(i = 0; i < 30; i++){
            if(aa[i] != bb[i]){
                cout << "Case " << k << ": different\n";
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "Case " << k << ": same\n";
        }
        
    }
    while(true);
}
