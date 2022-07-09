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
    int n, k;
    cin >> n;
    cin.ignore();
    string a, b;
    cin >> a >> b;
    string c = "GKBG";
    for(int i = 0; i < n; i++){
        if(a[i] == 'K'){
            if(b[i] == 'K') cout << "B";
            if(b[i] == 'B') cout << "B";
            if(b[i] == 'G') cout << "K";
        }
        if(a[i] == 'B'){
            if(b[i] == 'K') cout << "B";
            if(b[i] == 'B') cout << "G";
            if(b[i] == 'G') cout << "G";
        }
        if(a[i] == 'G'){
            if(b[i] == 'K') cout << "K";
            if(b[i] == 'B') cout << "G";
            if(b[i] == 'G') cout << "K";
        }
    }
}
