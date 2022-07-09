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
    int n;
    cin >> n;
    n--;
    cin.ignore();
    string a, b, c;
    map<string, int> aa;
    cin >> a;
    aa[a] ++;
    while(n--){
        cin >> b;
        if(b == a) aa[b] ++;
        else {
            c = b;
            aa[c]++;
        }
    }
    if(aa[a] > aa[c]) cout << a;
    else cout << c;
}
