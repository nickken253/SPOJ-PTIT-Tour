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

int dem = 0;
int n, k, s;

void check(int m, int k, int s, int sum)
{
    if (sum > s)
        return;
    if (k == 0)
    {
        if (sum == s)
        {
            dem++;
        }
    }
    else
    {
        for (int i = m + 1; i <= n; i++)
        {
            check(i, k - 1, s, sum + i);
        }
    }
}
int main()
{
    faster;
    do
    {
        cin >> n >> k >> s;
        if (n == 0 && k == 0 && s == 0)
            break;
        dem = 0;
        check(0, k, s, 0);
        cout << dem << endl;
    } while (true);
}
