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

struct toaDo{
    int x, y;
    void nhap(){
        cin >> x >> y;
    }
};
db dienTich(toaDo a, toaDo b, toaDo c){
    db dt;
    dt = 1.0 / 2 * fabs((b.x - a.x) * (c.y - a.y) - (c.x - a.x) * (b.y - a.y));
    return dt;
} 
int main()
{
    faster;
    toaDo a,b,c;
    a.nhap();
    b.nhap();
    c.nhap();
    db dttg = dienTich(a, b, c);
    int n, dem = 0;
    cin >> n;
    while(n--){
        toaDo d;
        d.nhap();
        if(dienTich(a, b, d) + dienTich(d, b, c) + dienTich(a, d, c) == dttg) dem++;
    }
    cout << setprecision(1) << fixed <<dttg << endl << dem;
}
