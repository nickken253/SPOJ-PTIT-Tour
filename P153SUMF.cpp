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
    int n;
    cin >> n;
    cin.ignore();
    string a;
    cin >> a;
    int check[26] = {};
    transform(a.begin(),a.end(), a.begin(), ::tolower);
    for(int i = 0; i < n; i++){
        check[a[i] - 'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(check[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}

