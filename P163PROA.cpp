#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll nhan(ll a, ll b){

}
int main()
{
    faster;
    string a;
    cin >> a;
    ll demm = 0;
    ll ts[10] = {}, k = 10;
    ll so[10] = {}, sum = 1;
    if (a[0] == '?')
        sum *= 9;
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] == '?' && i != 0)
            demm ++;
        else
            ts[a[i] - 'A']++;
    }

    // for(ll i = 0; i < 10; i++){
    //     cout << ts[i] << " ";
    // }
    // cout << endl;
    for (ll i = 0; i < 10; i++)
    {
        if (ts[i] != 0)
        {
            so[i] = k;
            k--;
        }
    }
    // for(ll i = 0; i < 10; i++){
    //     cout << so[i] << " ";
    // }
    cout << endl;
    if (a[0] >= 'A' && a[0] <= 'J') so[a[0] - 'A']--;
    for (ll i = 0; i < 10; i++)
    {
        if(ts[i] != 0){
            sum *= so[i];
            // so[i]--;
        }
            
    }
    // if(demm != 0) sum *= demm;
    cout << sum;
    while(demm--) cout << "0";
}
