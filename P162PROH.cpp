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
    int n, dem = 0, st = 0, i = 1;
    cin >> n;
    while(true){
        st += i, i++;
        n -= st;
        dem ++;
        // cout << n << " " << dem << endl;
        if(n <= 0) break;
    }
    // if(n < 0) dem--;    
    cout << dem;
}

