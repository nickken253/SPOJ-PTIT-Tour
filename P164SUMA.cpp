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
    int t;
    cin >> t;
    int n = t;
    cin.ignore();
    map<string, int> ten;
    t--;
    string a, c;
    cin >> a;
    ten[a]++;
    while(t--){
        string b;
        cin >> b;
        if(b != a) c = b;
        ten[b]++;
    }
    if(n > 1){
        if(ten[a] > ten[c]) cout << a;
        else cout << c;
    }
    else cout << a;
}
