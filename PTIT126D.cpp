#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string a;
int main()
{
    faster;
    int n;
    do{
        cin >> n;
        if(n == 0) break;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        stack<int> ss;
        vector<int> sss;
        for(int i = 1; i <= n; i++){
            while(a[i] > sss.size()){
                sss.push_back(i);
            }
        }
        for(auto i : sss) cout << i << " ";
        cout << endl;
    }
    while(true);
}

