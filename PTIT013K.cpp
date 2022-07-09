#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int gt(int n){
    int tich = 1;
    for(int i = 1; i <= n; i++){
        tich *= i;
    }
    return tich;
}
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        int sum = 0, k = 1;
        cin >> a;
        for(int i = a.size() - 1; i >= 0; i--){
            sum += (a[i] - '0') * gt(k);
            k ++;
        }
        cout << sum << endl;
    }
}