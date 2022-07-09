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
    stack<int> ss;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'C') ss.push(12);
        if(a[i] == 'H') ss.push(1);
        if(a[i] == 'O') ss.push(16);
        if(a[i] == '(') ss.push(0);
        if(a[i] == ')'){
            int sum = 0;
            while(ss.top() != 0){
                sum += ss.top();
                ss.pop();
            }
            ss.pop();
            ss.push(sum);
        } 
        if(a[i] >= '2' && a[i] <= '9'){
            int sum;
            sum = (a[i] - '0') * ss.top();
            ss.pop();
            ss.push(sum);
        }
    }
    int sum = 0;
    while(ss.size() != 0){
        sum += ss.top();
        ss.pop();
    }
    cout << sum;
}
