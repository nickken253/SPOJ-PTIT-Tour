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

struct bai{
    int front, behind, gtri;
};
int main()
{
    faster;
    int n, x;
    cin >> n >> x;
    bai a[n + 2];
    a[0].gtri = 0;
    a[0].behind = 1;
    a[n + 1].gtri = -1;
    for(int i = 1; i <= n; i++){
        a[i].gtri = i;
    }
    for(int i = 1; i <= n; i++){
        a[i].front = a[i - 1].gtri;
        a[i].behind = a[i + 1].gtri;
    }
    while(x--){
        int m, nn;
        cin >> m >> nn;
        a[a[m].front].behind = a[m].behind;
        // cout << a[a[m].front].behind << " behind: " << a[m].front  << endl;
        a[a[m].behind].front = a[m].front;
        // cout << a[a[m].behind].front << " front: " << a[m].behind << endl;
        
        a[m].front = a[nn].front;

        a[a[nn].front].behind = m;
        a[nn].front = m;

        
        a[m].behind = nn;
        // int k = 0;
        // for(int i = 0; i < n; i++){
        //     cout << a[k].behind << " ";
        //     k = a[k].behind;
        // }
        // cout << endl;
        // cout << a[8].behind << endl;
        // cout << a[9].front << endl;
    }
    int k = 0;
    for(int i = 0; i < n; i++){
        cout << a[k].behind << " ";
        k = a[k].behind;
    }
    
}
