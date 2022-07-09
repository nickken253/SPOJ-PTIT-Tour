#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

int main()
{
    faster;
    int x, y, a, b;
    cin >> x >> y >> a >> b;
    int max1 = max(x, a);
    int min1 = min(x, a);
    int max2 = max(y, b);
    int min2 = min(y, b);
    if(max1 <= min2){
        cout << "0";
        return 0;
    }
    // cout << "check" << endl;
    int dem = 0;
    for(int i = min1; i <= max1; i++){
        int k = min(i, max2 + 1);
        for(int j = min2; j < k; j++){
            dem++;
        }
    }
    cout << dem << endl;
    for(int i = min1; i <= max1; i++){
        int k = min(i, max2 + 1);
        for(int j = min2; j < k; j++){
            cout << i << " " << j << endl;
        }
    }
}
