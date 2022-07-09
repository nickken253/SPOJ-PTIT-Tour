#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main()
{
    faster;
    string a;
    cin >> a;
    while(a.size() % 3 != 0) a = '0' + a;
    for(int i = 0; i < a.size() - 2; i += 3){
        string b = "";
        b = b + a[i] + a[i + 1] + a[i + 2];
        if(b == "000") cout << "0";
        if(b == "001") cout << "1";
        if(b == "010") cout << "2";
        if(b == "011") cout << "3";
        if(b == "100") cout << "4";
        if(b == "101") cout << "5";
        if(b == "110") cout << "6";
        if(b == "111") cout << "7";
    }
}
