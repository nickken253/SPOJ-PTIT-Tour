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
    int n, k = 1, dem = 0;
    cin >> n;
    while(k < n){
        k *= 2;
    }
    if(k == n){
        cout << k << " 0";
        return 0;
    }
    int keo = k;
    int sum = 0;
    while(sum != n){
        if(sum + (k / 2) > n){
            k /= 2;
            dem++;
            continue;
        }
        sum += (k / 2);
        dem++;
        k /= 2;
        // if(k == 1 && sum +)
    }
    cout << keo << " " << dem;
}
