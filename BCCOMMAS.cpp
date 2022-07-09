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
    string a, b = "";
    int dem = 0;
    cin >> a;
    for(int i = a.size() - 1; i >= 0; i--){
        b += a[i];
        dem ++;
        if(dem == 3 && i != 0){
            b += ',';
            dem = 0;
        }
    }
    reverse(b.begin(), b.end());
    cout << b;
}
