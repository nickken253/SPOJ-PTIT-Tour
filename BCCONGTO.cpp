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
    string n;
    do{
        cin >> n;
        if(n == "0"){
            break;
        }
        ll sum = 0;
        for(int i = 0; i < n.size(); i++){
            ll a = n[i] - '0';
            if(a > 4){
                a--;
            }
            sum = sum * 9 + a;
        }
        cout << n << ": " << sum << endl;
    }
    while(n != "0");
}