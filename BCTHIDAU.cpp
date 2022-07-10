#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct Prob
{
    int sub, time, pen;
    void nhap()
    {
        cin >> sub >> time;
        if (time == 0)
        {
            pen = 0;
        }
        else
        {
            pen = (sub - 1) * 20 + time;
        }
    }
};
struct ACM
{
    string ten;
    int soBai = 0, diem = 0;
    Prob a, b, c, d;
    void nhap()
    {
        cin >> ten;
        a.nhap();
        b.nhap();
        c.nhap();
        d.nhap();
        if (a.pen != 0)
        {
            soBai++;
            diem += a.pen;
        }
        if (b.pen != 0)
        {
            soBai++;
            diem += b.pen;
        }
        if (c.pen != 0)
        {
            soBai++;
            diem += c.pen;
        }
        if (d.pen != 0)
        {
            soBai++;
            diem += d.pen;
        }
    }
    void xuat()
    {
        cout << ten << " " << soBai << " " << diem;
    }
};
bool cmp(ACM a, ACM b)
{
    if (a.soBai == b.soBai)
    {
        return a.diem < b.diem;
    }
    return a.soBai > b.soBai;
}
int main()
{
    faster;
    int n;
    cin >> n;
    ACM a[n];
    for (int i = 0; i < n; i++)
    {
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    a[0].xuat();
}
