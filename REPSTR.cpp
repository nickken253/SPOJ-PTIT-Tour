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
    string a, b;
    cin >> a >> b;
    sort(b.begin(), b.end()); 
    for(int i = 0; i < a.size(); i++){
        if(a[i] < b.back()){
            a[i] = b.back();
            b.erase(b.end() - 1);
        }
    }
    cout << a; 
}
