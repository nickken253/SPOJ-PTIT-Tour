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
    int n, m, dem = 0;
    cin >> n >> m;
    for(int i = 0; i < 110; i++){
        for(int j = 0; j < 110; j++){
            if(i * i + j == n && i + j * j == m) dem++;
        }
    }
    cout << dem;
}
