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
    vector<ll> fibo(96);
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 1;
    for(int i = 3; i < 95; i++){
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    int t;
    cin >> t;
    while(t--){
        ll a, check = 0;
        cin >> a;
        for(int i = 0; i < 95; i++){
            if(a == fibo[i]){
                cout << "YES\n";
                check = 1;
                break;
            }
        }
        if(check == 0){
            cout << "NO\n";
        }
    }
    
}
