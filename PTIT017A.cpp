#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll dn(ll n){
    ll sum = 0;
    for(ll i = 1; i < sqrt(n); i++){
        if(n % i == 0){
            sum += (i + (n / i));
        }
    }
    if(floor(sqrt(n)) * floor(sqrt(n)) == n){
        sum += sqrt(n);
    }
    return sum;
}
int main(){
    faster;
    int big = 10000007;
    vector<int> check(big + 1, 0);
    vector<int> ngto(big);
    vector<int> ngto2(big, 0);
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= big; i++){
        if(check[i] == 0){
            for(int j = i * 2; j<= big; j += i){
                check[j] = 1;
            }
        }
    }
    int k = 0;
    for(int i = 0; i <= big; i++){
        if(check[i] == 0){
            ngto[k] = i;
            k ++;
        }
    }
    for(int i = 0; i < k; i++){
        ngto2[ngto[i]] = 1;
        for(int j = ngto[i] * 2; j <= big; j += ngto[i]){
            ngto2[j]++;
        }
    }
    int t, kk = 1;
    cin >> t;
    
    while(t--){
        int a, b, c, dem = 0;
        cin >> a >> b >> c;
        for(int i = a; i <= b; i++){
            if(ngto2[i] == c){
                dem++;
            }
        }
        cout << "Case #" << kk << ": "<< dem << endl;
        kk++;
    }
}

