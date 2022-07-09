#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int ktra2(int a, int b, int c){
    if(a + b == c || a + c == b || b + c == a) return 1;
    return 0;
}
int ktra1(int a, int b, int c){
    if(a + b > c && a + c > b && b + c > a) return 1;
    return 0;
}
int main()
{
    faster;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(ktra1(a,b,c) == 1 || ktra1(b,c,d) == 1 || ktra1(a,b,d) == 1|| ktra1(a,c,d) == 1){
        cout << "TRIANGLE";
    }
    else if(ktra2(a,b,c) == 1 || ktra2(b,c,d) == 1 || ktra2(a,b,d) == 1|| ktra2(a,c,d) == 1){
        cout << "SEGMENT";
    }
    else cout << "IMPOSSIBLE";
}
