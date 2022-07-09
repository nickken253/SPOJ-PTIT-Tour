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
    int big = 1000006;
    vector<int> check(big + 5, 0);
    check[0] = 0;
    for(int i = 1; i <= big; i ++){
        for(int j = 1; j <= big / i; j ++){
            check[j * i] += i;
        }
    }
    int l, r, dem = 0;
    cin >> l >> r;
    for(int i = l; i <= r; i++){
        if(check[i] - i > i) dem++;
    }
    cout << dem;
}
