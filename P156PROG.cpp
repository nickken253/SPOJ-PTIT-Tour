#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct data{
    int gtri, vtri;
};
bool cmp (data a, data b){
    return a.gtri > b.gtri;
}
int main()
{
    faster;
    int n, k = 1;
    while(cin >> n){
        int check = 0;
        data a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i]. gtri;
            a[i].vtri = i + 1;
        }
        for(int i = 0; i < n; i++){
            cin >> b[i]. gtri;
            b[i].vtri = i + 1;
        }
        sort(a, a + n, cmp);
        sort(b, b + n, cmp);
        cout << "Case " << k << ": ";
        k++;
        for(int i = 0; i < n; i++){
            if(a[i].vtri != b[i].vtri){
                cout << i + 1;
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "agree";
        cout << endl;
    }
}