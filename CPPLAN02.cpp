#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string tong(string a, string b){
    string c = "";
    int du = 0;
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    for(int i = a.size() - 1; i >= 0; i--){
        du = (a[i] - '0') + (b[i] - '0') + du;
        char k = du % 10 + '0';
        c = k + c;
        du /= 10;
    }
    if(du != 0){
        c = '1' + c;
    }
    return c;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string a, b;
        cin >> a >> b;
        cout << tong(a, b) << endl;
    }
}