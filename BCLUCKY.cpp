#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


string a;
bool cmp(ll a, ll b){
    return a > b;
}
int main()
{
    faster;
    ll n, x;
    cin >> n >> x;
    map<ll,ll> ss;
    vector<ll> a(1000010, 0);
    ll k = 0, minn;
    for(ll i = 1; i <= n; i++){
        ll b;
        cin >> b;
        if(ss[b] == 0){
            a[k] = b;
            k++;
        }
        ss[b]++;
    }
    minn = INT_MAX;
    for(ll i = 0; i < k; i++){
        minn = min(minn, ss[a[i]]);
    }
    ll smm;
    sort(a.begin(), a.begin() + k, cmp);
    for(ll i = 0; i < k; i++){
        if(ss[a[i]] == minn){
            smm = a[i];
            break;
        }
    }
    cout << n * x - smm * ss[smm];
}

