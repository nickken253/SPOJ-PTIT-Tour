#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int tong(int n){
    int sum = 0;
    while(n != 0){
        sum += (n % 10);
        n /= 10;
    }
    if(sum < 10) return sum;
    else return tong(sum);
}
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        cout << tong(n) << endl;
    }
}
