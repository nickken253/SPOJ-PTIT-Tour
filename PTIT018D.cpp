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
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a;
        string b = "", c = "";
        cin >> a;
        int n = a.size(), k;
        int sum1 = 0, sum2 = 0;
        for(int i = 0; i < n / 2; i ++){
            sum1 += (a[i] - 'A');
        }
        for(int i = n / 2; i < n; i ++){
            sum2 += (a[i] - 'A');
        }
        for(int i = 0; i < n / 2; i ++){
            b += ((a[i] - 'A') + sum1) % 26 + 'A';
        }
        for(int i = n / 2; i < n; i ++){
            c += ((a[i] - 'A') + sum2) % 26 + 'A';
        }
        for(int i = 0; i < n / 2; i ++){
            b[i] = ((b[i] - 'A') + (c[i] - 'A')) % 26 + 'A';
        }
        cout << b << endl;
    }
}
