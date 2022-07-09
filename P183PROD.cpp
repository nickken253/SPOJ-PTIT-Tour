#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int ktra(int n){
    if(n == 2 || n == 3) return 1;
    if(n < 2 || n % 2 == 0 || n % 3 == 0) return 0;
    if(ceil(sqrt(n)) * ceil(sqrt(n)) == n) return 0;
    for(int i = 5; i <= sqrt(n); i += 6){
        if(n % i ==0 || n % (i + 2) == 0) return 0;
    }
    return 1;
}
int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    int dem = 0;
    while(true){
        if(n == dem) return 0;
        if(ktra(k) == 1) cout << k << " ", dem++, k++;
        else k++;
    }
}
