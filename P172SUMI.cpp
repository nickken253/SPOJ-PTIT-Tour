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
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        sum += a[i];
    }
    // cout << "check" << endl;
    sort(a, a + n);
    int i = 0;
    if(sum % 2 == 0){
        for(int i = 0; i < n; i++){
            if(a[i] % 2 != 0){
                sum -= a[i];
                cout << sum;
                break;
            }
        }
        if(sum % 2 == 0) cout << 0;
    }
    else{
        cout << sum;
    }
}
