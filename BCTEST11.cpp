#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int check(int n){
    while(n != 0){
        int a = n % 10;
        if(a != 4 && a != 7){
            // cout << a << endl;
            return 0;
        }
        n /= 10;
    }
    return 1;
}
int main()
{
    faster;
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
            if(check(i) == 1){
                cout << "YES";
                // cout << i << endl;
                return 0;
            }
        }
    }
    cout << "NO";
    // cout << check(47);
}
