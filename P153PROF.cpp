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
    ll n;
    cin >> n;
    ll a[n], b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    sort(a, a + n);
    sort(b, b + n);
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    // cout << endl;
    // for(int i = 0; i < n; i++){
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    int dem = 0;
    stack<int> aa;
    for (int i = 0; i < n; i++)
    {
       aa.push(a[i]);
    }
    stack<int> bb;
    for (int i = 0; i < n; i++)
    {
       bb.push(b[i]);
    }
    while(aa.size() != 0 && bb.size() != 0){
        if(aa.top() < bb.top()){
            dem ++;
            aa.pop();
            bb.pop();
        }
        else{
            aa.pop();
        }
    }
    cout << dem;
}
