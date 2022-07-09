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
    int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int n, check = 0;
    cin >> n;
    for(int i = 0; i < 14; i++){
        if(n % a[i] == 0){
            check = 1;
            break;
        }
    }
    if(check == 0) cout << "NO";
    else cout << "YES";
}
