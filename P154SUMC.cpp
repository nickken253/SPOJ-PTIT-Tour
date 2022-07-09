#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct cmp
{
    bool operator()(char a, char b)
    {
        return a > b;
    }
};
int main()
{
    faster;
    string a;
    cin >> a;
    char b[26] = {};
    int dem = 0;
    for(int i = 0; i < a.size(); i++){
        if(b[a[i] - 'a'] == 0) dem ++;
        b[a[i] - 'a'] ++;
    }
    // cout << dem << endl;
    if(dem % 2 == 0) cout << "CHAT WITH HER!";
    else cout << "IGNORE HIM!";
}
