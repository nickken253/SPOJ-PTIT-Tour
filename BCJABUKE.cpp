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
    int n, m, j, a;
    cin >> n >> m >> j;
    int pos1, pos2, cnt = 0;
    pos1 = 0, pos2 = m;
    for (int i = 0; i < j; i++)
    {
        // cout << pos1 << " " << pos2 << endl;
        cin >> a;
        if (pos1 < a && a <= pos2)
        {
            // cout << "stop" << endl;
            // continue;
        }
        if (a > pos2)
        {
            cnt += (a - pos2);
            // cout << "phai" << a - pos2 << endl;
            pos2 = a, pos1 = pos2 - m;
            
        }
        else if (a <= pos1)
        {
            cnt += (pos1 - a + 1);
            // cout << "trai" << pos1 - a + 1 << endl;
            pos1 = a - 1, pos2 = pos1 + m;
            
        }
        // cout << pos1 << " " << pos2 << endl << endl;
    }
    cout << cnt;
}
