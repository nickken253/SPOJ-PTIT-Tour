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
    string a;
    cin >> a;
    if(a[0] != '-'){
        cout << a;
        return 0;
    }
    if(a[a.size() - 1] > a[a.size() - 2]){
        a.erase(a.size() - 1);
    }
    else{
        a.erase(a.size() - 2, 1);
    }
    if(a == "-0") a = "0";
    cout << a;
}
