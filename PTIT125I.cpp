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
    int n, k;
    string a;
    cin >> n >> k;
    cin.ignore();
    cin >> a;
    stack<char> ss;
    stack<char> ss2;
    ss.push('9');
    for(int i = 0; i < a.size(); i++){
        while(a[i] > ss.top()){
            if(k != 0 && ss.size() != 0){
                // cout << ss.top();
                ss.pop();
                k--;
            }
            else break;
        }
        ss.push(a[i]);    
    }
    // cout << endl;
    while(k--) ss.pop();
    while(ss.size() != 0){
        // cout << ss.top();
        ss2.push(ss.top());
        ss.pop();
    }
    // cout << endl;
    ss2.pop();
    while(ss2.size() != 0){
        cout << ss2.top();
        ss2.pop();
    }
    // cout << " " << k;
}
