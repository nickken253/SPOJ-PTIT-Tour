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
    int demLL = 0, demRR = 0, maxx = INT_MIN;
    int demL = 0, demR = 0;
    cin >> a;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == 'L')
        {
            demL ++;
            demLL ++;
            maxx = max(maxx, demLL - demR);
        }
        else if (a[i] == 'R')
        {
            demR++;
            demRR ++;
            maxx = max(maxx, demRR - demL);
        }
        else
        {
            demLL ++;
            maxx = max(maxx, demLL - demR);
            demRR ++;
            maxx = max(maxx, demRR - demL);
        }
    }
    cout << maxx;
}
