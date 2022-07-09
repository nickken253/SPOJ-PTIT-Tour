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
    int n, dem = 0;;
    cin >> n;
    cin.ignore();
    string a;
    cin >> a;
    for(int i = 0; i < n; i++){
        if(a[i] == '0' && a[i + 1] == '1' && a[i + 2] == '0'){
            dem++;
            a[i + 2] = '1';
        }
    }
    cout << dem;
}
