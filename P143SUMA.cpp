#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct rong{
    int x, y;
    void nhap(){
        cin >> x >> y;
    }
    void xuat(){
        cout << x << " " << y << endl;
    }
};
bool cmp(rong a, rong b){
    if(a.x == b.x){
        return a.y > b.y;
    }
    else return a.x < b.x;
}
int main()
{
    faster;
    int s, n;
    cin >> s >> n;
    rong a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    // for(int i = 0; i < n; i++){
    //     a[i].xuat();
    // }
    for(int i = 0; i < n; i++){
        if(s > a[i].x){
            s += a[i].y;
            // cout << s << " ";
        }
        else{
            cout << "NO";
            return 0;
        }
    } 
    cout << "YES";   
}
