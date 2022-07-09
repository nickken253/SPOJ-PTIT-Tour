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
    int n, dem = 1, demL = 0;
    cin >> n;
    cin.ignore();
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'S') dem++;
        else demL ++;
    }
    cout << min(n, dem + demL / 2);
}
