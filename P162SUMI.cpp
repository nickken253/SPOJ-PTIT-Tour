#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int a[3], dem = 0, k, cnt = -1;

void cut(int n){
    // cout << n << " ";
    if(n == 0){
        cnt = max(cnt, dem);
    }
    // if(i < 2){}
    for(int i = 0; i < 3; i++){
        if(n - a[i] >= 0){
            // cout << a[i] << " 1\n";
            // n -= a[i];
            if(((n - a[i]) / a[0]) <= cnt - dem) return;    
            dem++;
            cut(n - a[i]);
            dem--;
        }
    }
}
int main()
{
    faster;
    int n;
    cin >> n >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cut(n);
    cout << cnt;
}
