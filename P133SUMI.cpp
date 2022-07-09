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
    string a;
    cin >> a;
    int n = a.size(), r, c, i;
    for(i = sqrt(n); i >= 1; i--){
        if(n % i == 0){
            break;
        }
    }
    r = i, c = n / i;
    char mm[r][c];
    for(i = 0; i < r; i ++){
        int k = 0;
        for(int j = 0; j < c; j++){
            mm[i][j] = a[i + k];
            k += r;
        }
    }
    for(i = 0; i < r; i ++){
        for(int j = 0; j < c; j++){
            cout << mm[i][j];
        }
    }
}
