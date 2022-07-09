#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string tru(string a, string b){
    string c = "";
    while(a.size() < b.size()) a = '0' + a;
    while(b.size() < a.size()) b = '0' + b;
    int du = 0;
    for(int i = a.size() - 1; i >= 0; i--){
        int miss = a[i] - b[i] - du;
        if(miss < 0) miss += 10, du = 1;
        else du = 0;
        char k = miss + '0';
        c = k + c; 
    }
    while(c[0] == '0') c.erase(c.begin());
    return c;  
}
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
    string a, b, c, d;
    int k, m;
    cin >> a >> b >> c;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == '?'){
            k = 1;
            m = i;
            break;
        }
    }
    for(int i = 0; i < b.size(); i++){
        if(b[i] == '?'){
            k = 2;
            m = i;
            break;
        }
    }
    for(int i = 0; i < c.size(); i++){
        if(c[i] == '?'){
            k = 3;
            m = i;
            break;
        }
    }
    switch (k)
    {
    case 1:
        d = tru(c, b);
        cout << d[m];
        break;
    case 2:
        d = tru(c, a);
        cout << d[m];
        break;
    case 3:
        d = cong(a, b);
        cout << d[m];
        break;
    default:
        break;
    }
}
