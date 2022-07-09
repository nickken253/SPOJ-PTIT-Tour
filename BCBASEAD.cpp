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
    vector<string> a(16);
    a[0] = "{}";
    a[1] = "{{}}";
    for(int i = 2; i < 16; i ++){
        string b = a[i - 1];
        b.erase(b.size() - 1);
        a[i] = b + ',' + a[i - 1] + '}';
    }
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string n,m;
        cin >> n >> m;
        int demn = 0, demm = 0;
        for(int i = 0; i < n.size(); i++){
            if(n[i] == '{' || n[i] == '}') demn++;
        }
        demn = log2(demn) - 1;
        for(int i = 0; i < m.size(); i++){
            if(m[i] == '{' || m[i] == '}') demm++;
        }
        demm = log2(demm) - 1;
        cout << a[demn + demm] << endl;
    }
}
