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
    int n, k;
    cin >> n >> k;
    if(k % (n - 1) == 0){
        int a, b;
        a = k / (n - 1);
        b = k / (n - 1) - 1;
        cout << b + k << " " << a + k;
    }
    else{
        int c;
        c = k / (n - 1);
        cout << c + k << " " << c + k;
    }
}
