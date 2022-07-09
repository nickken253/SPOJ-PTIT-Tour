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
    int n, sum = 0;
    cin >> n;
    cin.ignore();
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++){
        sum += min(abs(a[i] - b[i]), min(abs(10 - (a[i] - '0') + (b[i] - '0')), abs((a[i] - '0') + 10 - (b[i] - '0'))));
        // cout << min(abs(a[i] - b[i]), min(abs(10 - (a[i] - '0') + (b[i] - '0')), abs((a[i] - '0') + 10 - (b[i] - '0')))) << endl;
    }
    cout << sum;
}
