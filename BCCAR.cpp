#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        int n, minn = INT_MAX, maxx = INT_MIN;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            if(a[i] > maxx){
                maxx = a[i];
            }
            if(a[i] < minn){
                minn = a[i];
            }
        }
        cout << (maxx - minn) * 2 << endl;
    }
} 