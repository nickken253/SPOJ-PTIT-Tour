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
    int x = 0, n;
    cin >> n;
    while(n--){
        string a;
        cin >> a;
        if(a == "++X") ++x;
        if(a == "--X") --x;
        if(a == "X++") x++;
        if(a == "X--") x--;
    }
    cout << x;
}
