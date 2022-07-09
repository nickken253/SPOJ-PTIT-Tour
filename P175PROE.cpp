#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll tinh(ll a){
    ll sum = 0;
    while(a != 0){
        sum += a % 10;
        a /= 10;
    }
    return sum;
}
int main()
{
    faster;
    string a;
    cin >> a;
    
    if(a.size() == 1){
        cout << "0";
        return 0;
    }
    ll sum = 0;
    for(ll i = 0; i < a.size(); i++){
        sum += (a[i] - '0');
    }
    // cout << sum << endl;
    ll dem = 1;
    if(sum >= 0 && sum <= 9){
        cout << dem;
        return 0;
    }
    while(true){
        sum = tinh(sum);
        
        dem++;
        if(sum <= 9){
            break;
        }
    }
    cout << dem;
}
