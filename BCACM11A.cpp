#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

// NOTE: có 900 số abc mà a khác 0. 
// 180 số abc có tổng chi hết cho 5 (lấy (995 - 100) / 5 + 1). 
// Có 35 số abc có tổng chi hết cho 5 mà chứa số 0.
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if(n <= 154 && m <= 180 - n && k <= 900 - n - m){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
        cout << endl;
    }
}
