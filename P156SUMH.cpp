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
    n = n / 2 + 1;
    for(int i = - n + 1; i <= n - 1; i++){
        for(int j = - n + 1; j <= n - 1; j++){
            if((n - abs(i)) > abs(j)) cout << "D";
            else cout << "*";
        }
        cout << endl;
    }
}
