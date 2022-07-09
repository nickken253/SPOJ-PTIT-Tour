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
    ll a[5];
    do{
        ll cnt = 0;   
        for(ll i = 0; i < 4; i++){
            cin >> a[i];
        }
        if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0) break;
        while(true){
            ll dem = 0;
            for (ll i = 0; i < 3; i++)
            {
                if (a[i] == a[i + 1])
                    dem ++;
            }
            // cout << "dem = " << dem << endl;
            if(dem == 3){
                cout << cnt << endl;
                break;
            }
            a[4] = a[0];
            for (ll i = 0; i < 4; i++)
            {
                a[i] = abs(a[i] - a[i + 1]);
                // cout << a[i] << " ";
            }
            cnt++;
            // cout << endl;
        }
        
    }
    while(true);
}
