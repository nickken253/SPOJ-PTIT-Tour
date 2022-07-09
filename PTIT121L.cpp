#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main(){
    faster;
    long long a[3], b[3], maxx = INT_MIN, dtich = 0;
    for(int i = 0; i < 3; i ++){
        cin >> a[i] >> b[i];
        maxx = max(maxx, max(a[i], b[i]));
        dtich += a[i] * b[i];
    }
    if(maxx * maxx == dtich){
        cout << maxx;
    }
    else{
        cout << "0";
    }
}