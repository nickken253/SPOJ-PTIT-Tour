#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//NOT_DONE_____________
int main()
{
    faster;
    ll n, b;
    cin >> n >> b; 
    ll a[n], pos;
    for(ll i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] > b) a[i] = 1;
        else if(a[i] < b) a[i] = -1;
        else a[i] = 0, pos = i;
    }
    ll sum = 0;
    for(ll i = 0; i < pos; i++){
        sum += a[i];
    }
    ll tmp, dem = 1;
    for(ll i = 0; i < pos; i++){
        tmp = sum;
        for(ll j = pos; j < n; j++){
            tmp += a[j];
            if(tmp == 0) dem++;
        }
        sum -= a[i];
    }
    cout << dem;
}
