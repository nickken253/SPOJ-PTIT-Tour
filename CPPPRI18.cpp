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
    int t;
    cin >> t;
    while (t--)
    {
        ull m, n, a, b, c, mina, minb, minc, maxa, maxb, maxc;
        cin >> m >> n >> a >> b;
        // mina = minb = minc = min(m, n);
        // maxa = maxb = maxc = max(m, n);
        mina = minb = minc = m;
        maxa = maxb = maxc = n;
        c = a * b;
        while (mina % a != 0)
        {
            mina++;
        }
        while (minb % b != 0)
        {
            minb++;
        }
        while (minc % c != 0)
        {
            minc++;
        }
        while (maxa % a != 0)
        {
            maxa--;
        }
        while (maxb % b != 0)
        {
            maxb--;
        }
        while (maxc % c != 0)
        {
            maxc--;
        }
        ull soa, sob, soc;
        if (mina <= maxa)
        {
            soa = ((maxa - mina) / a) + 1;
        }
        else
        {
            soa = 0;
        }
        if (minb <= maxb)
        {
            sob = ((maxb - minb) / b) + 1;
        }
        else
        {
            sob = 0;
        }
        if (minc <= maxc)
        {
            soc = ((maxc - minc) / c) + 1;
        }
        else
        {
            soc = 0;
        }
        ull sum = soa + sob - soc;
        // cout << mina << " " << maxa << endl;
        // cout << minb << " " << maxb << endl;
        // cout << minc << " " << maxc << endl;
        cout << sum << endl;
    }
}