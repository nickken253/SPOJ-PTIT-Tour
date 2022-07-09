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
    while(b.size() < a.size()) b = '0' + b;
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
    string a,b,c,d;
    cin >> a >> b;
    c = cong(a, b);
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '0') a.erase(i, 1);
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '0') b.erase(i, 1);
    }
    for(int i = 0; i < c.size(); i++){
        if(c[i] == '0') c.erase(i, 1);
    }
    d = cong(a, b);
    if(c == d) cout << "YES";
    else cout << "NO";
}
