#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//NOT_DONE____________
int main()
{
    faster;
    int n, dem = 1;
    cin >> n;
    while(n != 1){
        if(n % 2 != 0){
            n--;
            dem ++;
            n /= 2;
        }
        else{
            n /= 2;
        }
    }
    cout << dem;
}