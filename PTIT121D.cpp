#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
vector<ll> a(200);
void check(int i, int n){
    int st, mid, end;
    st = a[i - 1], mid = a[i] - 2 * a[i - 1], end = a[i] - a[i - 1] - mid;
    if(n > st && n <= st + mid){
        n -= st;
        if(n == 1) cout << "m";
        else cout << "o";
    }
    else if(n <= st) check(i - 1, n);
    else{
        n = n - st - mid;
        check(i - 1, n);
    }
}
int main()
{
    faster;
    a[0] = 3;
    ll k = 1, b;
    for(ll i = 1; i < 28; i++){
        ll tmp = 1;
        b = k + 2;
        while(b --){
            tmp += 1;
        }
        a[i] = a[i - 1] + tmp + a[i - 1];
        k++;
    }
    int n;
    cin >> n;
    int i;
    for(i = 1; i < 28; i++){
        if(n < a[i]){
            break;
        }
    }
    if(n > 3)   check(i, n);
    else{
        if(n == 1) cout << "m";
        else cout << "o";
    }
}
