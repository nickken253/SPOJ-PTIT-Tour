#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double
 
int main()
{
    faster;
    int a, b, dem1 = 0, dem2 = 0, dem3 = 0;
    cin >> a >> b;
    for(int i = 1; i <= 6; i++){
        if(abs(i - a) < abs(i - b)) dem1 ++;
        else if(abs(i - a) == abs(i - b)) dem2 ++;
        else dem3 ++;
    }
    cout << dem1 << " " << dem2 << " " << dem3;
}
