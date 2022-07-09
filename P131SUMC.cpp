#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

float check(int a, int b, int c, int d){
    return abs((a * 1.0 / c) - (b * 1.0 / d));
}
int main()
{
    faster;
    int a[4];
    float b[4];
    for(int i = 0; i < 4; i ++){
        cin >> a[i];
    }
    b[0] = check(a[0], a[1], a[2], a[3]);
    b[1] = check(a[2], a[0], a[3], a[1]);
    b[2] = check(a[3], a[2], a[1], a[0]);
    b[3] = check(a[1], a[3], a[0], a[2]);
    float t = max(b[0], max(b[1], max(b[2], b[3])));
    // cout << t << endl;
    if(t == b[0]) cout << "0";
    else if(t == b[1]) cout << "1";
    else if(t == b[2]) cout << "2";
    else if(t == b[3]) cout << "3";
}
