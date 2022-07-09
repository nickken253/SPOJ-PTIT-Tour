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
    ll t, sum = 0, maxx = INT_MIN;
    cin >> t;
    string ten;
    cin.ignore();
    while(t--){
        string a;
        cin >> a;
        ll b, c;
        cin >> b >> c;
        cin.ignore();
        int cnt = 0;
        while(c >= b){
            c = c - b + 2;
            cnt ++;
        }
        sum += cnt;
        // cout << cnt << endl;
        if(maxx < cnt){
            maxx = cnt;
            ten = a;
        }
    }
    cout << sum << endl << ten;
}
