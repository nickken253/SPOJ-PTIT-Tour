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
    int a, b;
    cin >> a >> b;
    string c = to_string(a);
    string d = to_string(b);
    for(int i = 0; i < c.size(); i++){
        if(c[i] == '6') c[i] = '5';
    }
    for(int i = 0; i < d.size(); i++){
        if(d[i] == '6') d[i] = '5';
    }
    stringstream cc(c);
    stringstream dd(d);
    cc >> a;
    dd >> b;
    cout << a + b << " ";
    for(int i = 0; i < c.size(); i++){
        if(c[i] == '5') c[i] = '6';
    }
    for(int i = 0; i < d.size(); i++){
        if(d[i] == '5') d[i] = '6';
    }
    stringstream cc2(c);
    stringstream dd2(d);
    cc2 >> a;
    dd2 >> b;
    cout << a + b;
}
