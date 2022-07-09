
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
    ll n;
    while(cin >> n){
        int dem[10] = {};
        ll k = 1;
        while(true){
            int cnt = 0;
            ll m = k * n;
            for(int i = 0; i < 10; i ++){
                if(dem[i] == 0){
                    cnt ++;
                }
            }
            if(cnt == 0){
                cout << k - 1 << endl;
                break;
            }
            k++;
            while(m != 0){
                int a = m % 10;
                dem[a]++;
                m /= 10;
            }
        }
    }
}
