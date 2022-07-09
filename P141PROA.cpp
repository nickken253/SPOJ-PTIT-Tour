#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//3M30S = 210S
int main()
{
    faster;
    int k, n;
    cin >> k >> n;
    int a[n];
    char b[n];
    for(int i = 0; i < n; i++){
        cin >> a[i] >> b[i];
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += a[i];
        if(sum > 210){
            cout << k;
            return 0;
        }
        if(b[i] == 'T'){
            if(k < 8) k++;
            else k = 1;
        }
    }
}
