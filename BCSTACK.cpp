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
    stack<ll> ss;
    string a;
    do{
        cin >> a;
        if(a == "end") break;
        if(a == "init"){
            while(ss.size() > 0){
                ss.pop();
            } 
        }
        if(a == "push"){
            int x;
            cin >> x;
            ss.push(x);
        }
        if(a == "pop"){
            if(ss.size() > 0){
                ss.pop();
            }
        }
        if(a == "top"){
            if(ss.size() != 0) cout << ss.top() << endl;
            else cout << "-1" << endl;
        }
        if(a == "size"){
            cout << ss.size() << endl;
        }
        if(a == "empty"){
            cout << ss.empty() << endl;
        }
    }
    while(a != "end");
}
