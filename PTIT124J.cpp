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
    // cout << a << endl;
    for(int i = 0; i < a.size() - 2; i += 3){
        string b = "";
        b = b + a[i] + a[i + 1] + a[i + 2];
        // cout << b;
        if(b == "000") cout << "0";
        else if(b == "001") cout << "1";
        else if(b == "010") cout << "2";
        else if(b == "011") cout << "3";
        else if(b == "100") cout << "4";
        else if(b == "101") cout << "5";
        else if(b == "110") cout << "6";
        else if(b == "111") cout << "7";
    }
}
    
