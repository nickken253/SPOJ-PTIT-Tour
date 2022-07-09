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
    ll n, m, a, nn, mm;
    cin >> n >> m >> a;
    if(n % a == 0){
        nn = n / a;
    }
    else{
        nn = (n / a) + 1;
    }
    if(m % a == 0){
        mm = m / a;
    }
    else{
        mm = (m / a) + 1;
    }
    cout << mm * nn;
}
