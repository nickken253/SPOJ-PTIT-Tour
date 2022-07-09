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
    string a;
    cin >> a;
    a = '0' + a;
    int n = a.size(), t = 0;
    int ss[100005];
    ss[0] = 'z' * 2;
    for(int i = 1; i < n; i++){
        while(a[i] > ss[t]) t--;
        t++;
        ss[t] = a[i];
    }
    for(int i = 1; i <= t; i++) cout << (char) ss[i];
}
