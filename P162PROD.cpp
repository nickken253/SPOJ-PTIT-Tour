#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//ĐƯA VỀ HÌNH BÌNH HÀNH RỒI TÍNH NHƯ BÌNH THƯỜNG
int main()
{
    faster;
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    cout << (2 * (c + d) * (e + d) - d * d - a * a);
}