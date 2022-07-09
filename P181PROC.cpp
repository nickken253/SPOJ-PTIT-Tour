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
    ll n, k, check = 0;
    vector<ll> ss;
    cin >> n >> k;
    for(ll i = 1; i <= k; i++){
        if(check == 0){
            ss.emplace_back(n % i);
            for(int j = 1; j < ss.size() - 1; j++){
                if(ss[j] == n % i){
                    check = 1;
                    break;
                }
            }
        }
        else break;
    }
    if(check == 0) cout << "Yes";
    else cout << "No";
}
