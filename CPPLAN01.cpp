#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string hieu(string a, string b){
    string c = "";
    int du = 0, so;
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    if(a < b) swap(a,b);
    for(int i = a.size() - 1; i >= 0; i--){
        so = (a[i] - '0') - (b[i] - '0') - du;
        if(so < 0){
            so += 10;
            du = 1;
        }
        else{
            du = 0;
        }
        char k = so + '0';
        c = k + c;
    }
    // while(c[0] == '0'){
    //     c.erase(c.begin());
    // }
    if(c.size() == 0){
        c = '0' + c;
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
        cout << hieu(a, b) << endl;
    }
}