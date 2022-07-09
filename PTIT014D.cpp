#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int tong(int n){
    int sum = 0;
    while(n != 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        int sum = 0;
        cin >> a;
        for(int i = 0; i < a.size(); i++){
            sum += a[i] - '0';
        }
        if(sum == 9){
            cout << "1";
        }
        else{
            while(sum > 9){
                sum = tong(sum);
            }
            if(sum != 9){
                cout << "0";
            }
            else{
                cout << "1";
            }
        }
        cout << endl;
    }
}