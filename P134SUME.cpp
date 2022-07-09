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
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    multiset<int> ss;
    ss.insert(a);
    ss.insert(b);
    ss.insert(c);
    ss.insert(d);
    int e[4];
    int k = 0;
    
    for (int i : ss)
    {
        e[k] = i;
        k++;
    }
    cout << e[0] * e[2];
}
