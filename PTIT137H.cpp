#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
bool cmp(string a, string b){
    return a + b < b + a;
}
int main()
{
    faster;
    string a;
    while(true){
        cin >> a;
        if(a == "end") break;
        string check = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
        int sum = 0;
        for(int i = 0; i < a.size(); i++){
            for(int j = 0; j < check.size(); j++){
                if(a[i] == check [j]){
                    sum += j;
                    break;
                }
            }
        }
        if(sum % 61 == 0) cout << "yes";
        else cout << "no";
        cout << endl;
    }
}
