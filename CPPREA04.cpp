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
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        if(n % 2 == 0){
            for(int i = 0; i < n / 2; i++){
                cout << a[i] << " " << a[n / 2 + i] << " ";
            }
        }
        else{
            for(int i = 0; i < n / 2; i++){
                cout << a[i] << " " << a[n / 2 + 1 + i] << " ";
            }
            cout << a[n / 2];
        }
        cout << endl;
    }
}
