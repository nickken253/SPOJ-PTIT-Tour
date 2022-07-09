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
    string a, b;
    int sum = 0;
    cin >> a >> b;
    int sa[30] = {}, sb[30] = {};
    for(int i = 0; i < a.size(); i++){
        sa[a[i] - 'a']++;
    }
    for(int i = 0; i < b.size(); i++){
        sb[b[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(sa[i] != sb[i]){
            sum += abs(sa[i] - sb[i]);
        }
    }
    cout << sum;
}
