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
    int c, k, sum = 1;
    cin >> c >> k;
    for(int i = 0; i < k; i++){
        sum *= 10;
    }
    int mon1, mon2;
    mon1 = (c / sum) * sum;
    mon2 = ((c / sum) + 1) * sum;
    if(c - mon1 < mon2 - c) cout << mon1;
    else cout << mon2;
}
