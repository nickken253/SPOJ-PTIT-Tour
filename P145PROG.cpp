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
    int big = 1000006;
    int mod = 1073741824;
    vector<int> check(big + 5, 0);
    vector<int> uoc(big + 5, 0);
    uoc[1] = 1;
    for (int i = 2; i <= big; i++)
    {
        uoc[i] += 2;
        for (int j = i * 2; j <= big; j += i)
        {
            uoc[j]++;
        }
    }
    // cout << uoc[1];
    int a, b, c, sum = 0;
    cin >> a >> b >> c;
    for(int i = 1; i <= a; i++){
        for(int j = 1; j <= b; j++){
            for(int k = 1; k <= c; k++){
                sum += (uoc[i * j * k] % mod);
            }
        }
    }
    cout << sum % mod;
}
