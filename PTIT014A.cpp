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
        getline(cin, a);
        if(a == "dung") cout << "2";
        if(a == "lon hon") cout << "1";
        if(a == "nho hon") cout << "3";
        cout << endl;
    }
}