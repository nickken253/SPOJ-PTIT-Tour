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
    int t;
    cin >> t;
    while(t--){
        ll qq, n, a, b, l, r, dem = 0;
        cin >> qq >> n;
        ll m = n * 2;
        for(ll i = 2; i <= sqrt(m); i++){
            if(m % i == 0){
                b = i;
                a = (m / i) - 1;
                if((a + b) % 2 == 0){
                    r = (a + b) / 2;
                    l = a + 1 - r;
                    if(l >= 1 && r > l) dem++;
                } 
            }
        }
        cout << qq << " " << dem << endl;
    }
}

