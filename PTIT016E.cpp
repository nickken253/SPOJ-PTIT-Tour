#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define for(i,a,b) for(int i = a; i < b; i++)

//NOT_DONE____________________________
int main(){
    faster;
    int n;
    cin >> n;
    ll a[n][11] = {};
    ll maxx[11] = {INT_MIN};
    for(i, 0, n){
        for(j, 0, 11){
            cin >> a[i][j];
            maxx[j] = max(maxx[j], a[i][j]);
        }
    }
    ll sum = 0;
    for(i,0,11){
        sum += maxx[i];
    }
    cout << sum;
}

// 3 56 12 45
// 56 + 45 + 12 - 3
