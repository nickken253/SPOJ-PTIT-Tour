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
    int y, k, n, check = 0;
    cin >> y >> k >> n;
    int a = 1;
    while(a * k <= y){
        a++;
    }
    a = (a * k) - y;
    // cout << a << endl;
    while(a <= (n - y)){
        check = 1;
        cout << a << " ";
        a += k;
    }
    if(check == 0) cout << "-1";
}
