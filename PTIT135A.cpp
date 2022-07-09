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
    int a, b, c;
    int check[101] = {};
    cin >> a >> b >> c;
    int t = 3;
    while(t--){
        int x, y;
        cin >> x >> y;
        for(int i = x; i < y; i++){
            check[i] ++;
        }
    }
    int sum = 0;
    for(int i = 0; i < 101; i++){
        if(check[i] == 1) sum += a;
        if(check[i] == 2) sum += (2 * b);
        if(check[i] == 3) sum += (3 * c);
    }
    cout << sum;
}
