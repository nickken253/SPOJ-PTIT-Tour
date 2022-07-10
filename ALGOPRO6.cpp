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
    int a, days, hangSo, sum = 0;
    cin >> a;
    if((a % 4 == 0 && a % 100 != 0) || (a % 400 == 0)){
        hangSo = 3597;
        days = 366;
    }
    else{
        hangSo = 3584;
        days = 365;
    }
    while(a > 0){
        sum += a % 10;
        a /= 10;
    }
    cout << hangSo + sum * days;
}