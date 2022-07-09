#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int big = 100005;
vector<int> check(big + 5, 0);

void ktra(int a, int n){
    for(int i = a; i <= n; i += a){
        check[i] = 1;
    }
}
int snt(int n){
    int dem = 0;
    if(n < 2) return 0;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            dem ++;
            break;
        }
    }
    if(dem == 0) return 1;
    else return 0;
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i < big + 5; i++){
            check[i] = 0;
        }
        for(int i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                // cout << "check" << endl;
                // cout << i << " " << n / i << endl;
                ktra(i, n);
                ktra((n / i), n);
            }
        }
        int dem = 0;
        for(int i = 1; i < n; i++){
            if(check[i] == 0) dem++;
        }
        // cout << dem << " ";
        cout << snt(dem) << endl;
    }
    
}
