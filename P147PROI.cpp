#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int UCLN(int a, int b){
    a = abs(a), b = abs(b);
    while(a * b != 0){
        if(a > b) a %= b;
        else b %= a;
    }
    return a + b;
}
int main()
{
    faster;
    int n, m;
    cin >> n >> m;
    vector<int> aa;
    vector<int> bb;
    for(int i = 0; i <= n; i ++){
        int a;
        cin >> a;
        aa.push_back(a);
    }
    for(int i = 0; i <= m; i ++){
        int a;
        cin >> a;
        bb.push_back(a);
    }
    if(n > m){
        if(aa[0] * bb[0] > 0) cout << "Infinity";
        else cout << "-Infinity";
    }
    else if(n < m){
        cout << "0/1";
    }
    else{
        int b = UCLN(aa[0], bb[0]);
        if(bb[0] * b < 0){
            b *= -1;
            cout << (aa[0] / b) << "/" << bb[0] / b;
        }
        else cout << (aa[0] / b) << "/" << bb[0] / b;
    }
}
