#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int main()
{
    faster;
    ll a[3], b[3];
    cin >> a[0] >> a[1] >> b[0] >> b[1] >> b[2];
    a[2] = sqrt(a[0] * a[0] + a[1] * a[1]);
    sort(a, a + 3);
    sort(b, b + 3);
    int check = 0;
    for(int i = 0; i < 3; i++){
        if(a[i] < b[i]){
            check = 1;
            break;
        }
    }
    if(check == 0){
        if(b[0] * b[0] + b[1] * b[1] == b[2] * b[2]) cout << "YES";
        else cout << "NO";
    }
    else cout << "NO";
}
