#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
bool check(string a){
    for(int i = 0; i < a.size(); i++){
        if(a[i] != '4' && a[i] != '7'){
            return 1;
        }
    }
    return 0;
}
int main(){
    faster;
    string a;
    string dem;
    cin >> a;
    dem = to_string(a.size());
    if(check(a) == 0 && check(dem) == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    cout << endl;
}

