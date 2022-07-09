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
    int n;
    do{
        cin >> n;
        if(n == 0) break;
        int dem = 1;
        while(n != 1){
            if(n % 2 == 0) n /= 2;
            else n = n * 3 + 1;
            dem++;
        }
        cout << dem << endl;
    }
    while(true);
}
