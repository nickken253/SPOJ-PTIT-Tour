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
    int t;
    cin >> t;
    while(t--){
        int a, dem = 0;
        cin >> a;
        for(int i = 1; i <= sqrt(a); i++){
            if(a % i == 0){
                int b = a / i;
                if(i % 2 == 0){
                    dem ++;
                }
                if(b % 2 == 0){
                    dem ++;
                }
            }
        }
        if(ceil(sqrt(a)) * ceil(sqrt(a)) == a && a % 2 == 0){
            dem --;
        }
        cout << dem << endl;
    }
}