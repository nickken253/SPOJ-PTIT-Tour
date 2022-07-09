#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//vàng - xanh - đỏ
int main()
{
    faster;
    int a, b, c, minn = INT_MAX;
    cin >> a >> b >> c;
    minn = min(minn, min(a, min(b, c)));
    if(minn == c){
        // cout << "check3 ";
        // cout << c - 2 << " " << c - 1 << " " << c << endl;
        cout << 3 * c - 3;
    }
    else if(minn == b){
        while(c - b <= 1){
            b--;
        }
        // cout << "check2 ";
        // cout << b - 1 << " " << b << " " << b + 1 << endl;
        cout << 3 * b;
    }
    else if(minn == a){
        while(b - a < 1 || c - a < 2){
            a--;
        }
        // cout << "check1 ";
        // cout << a << " " << a + 1 << " " << a + 2 << endl;
        cout << 3 * a + 3;
    }
}
