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
    int du = 0;
    cin >> a;
    string b1 = "128", b2 = "127";
    string s1 = "32768", s2 = "32767";
    string i1 = "2147483648", i2 = "2147483647";
    string l1 = "9223372036854775808", l2 = "9223372036854775808";
    if(a[0] == '-'){
        a.erase(0,1);
        du = 1;
    }
    while(a.size() < l2.size()) a = '0' + a;
    while(b1.size() < a.size()) b1 = '0' + b1;
    while(b2.size() < a.size()) b2 = '0' + b2;

    while(s1.size() < a.size()) s1 = '0' + s1;
    while(s2.size() < a.size()) s2 = '0' + s2;

    while(i1.size() < a.size()) i1 = '0' + i1;
    while(i2.size() < a.size()) i2 = '0' + i2;

    while(l1.size() < a.size()) l1 = '0' + l1;
    while(l2.size() < a.size()) l2 = '0' + l2;
    // cout << a << endl;
    // cout << b2 << endl;
    // cout << s2 << endl;
    // cout << i2 << endl;
    // cout << l2 << endl;
    if(du == 0){
        if(a <= b2) cout << "byte";
        else if(a <= s2) cout << "short";
        else if(a <= i2) cout << "int";
        else if(a <= l2) cout << "long";
        else cout << "BigInteger";
    }
    else{
        if(a <= b1) cout << "byte";
        else if(a <= s1) cout << "short";
        else if(a <= i1) cout << "int";
        else if(a <= l1) cout << "long";
        else cout << "BigInteger";
    }
    
}
