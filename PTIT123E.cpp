#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string cong(string a, string b){
    string c = "";
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    int du = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        du = a[i] - '0' + b[i] - '0' + du;
        char k = (du % 10) + '0';
        c = k + c;
        du /= 10;
    }
    if(du == 1) c = '1' + c;
    return c;
}
int main()
{
    faster;
    string a;
    while(cin >> a){
        int check = 0;
        string b = a + a;
        string c = a;
        for(int i = 2; i <= a.size(); i++){
            c = cong(c, a);
            if(b.find(c) > (b.size() - 1)){
                check = 1;
                break;
            }
        }
        if(check == 1){
            cout << a << " is not cyclic";
        }
        else {
            cout << a << " is cyclic";
        }
        cout << endl;
    }
    
}
