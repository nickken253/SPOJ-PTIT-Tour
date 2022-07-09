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
    int sum1 = 0, sum2 = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] != '4' && a[i] != '7'){
            cout << "NO";
            return 0;
        }
        if(i < a.size() / 2) sum1 += (a[i] - '0');
        else sum2 += (a[i] - '0');
    }
    if(sum1 == sum2) cout << "YES";
    else cout << "NO";
}
