
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
    int a[1005];
    a[1] = 1;
    a[2] = 2;
    for(int i = 3; i < 1005; i++){
        int sum = 1;
        for(int j = 1; j <= i / 2; j++){
            sum += a[j];
        }
        a[i] = sum;
    }
    int k = 1;
    while(t--){
        int n;
        cin >> n;
        cout << k << " " << a[n] << endl;
        k++;
    }
}
