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
    set<int> butMau;
    int a = 4;
    while(a--){
        int n;
        cin >> n;
        butMau.insert(n);
    }
    int dem = 0;
    for(int i : butMau) dem++;
    cout << 4 - dem;
}
