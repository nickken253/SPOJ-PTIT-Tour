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
    float w, c;
    void nhap(){
        cin >> w >> c;
    }
};
int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        data a[n];
        int check[n] = {};
        for(int i = 0; i < n; i++){
            a[i].nhap();
        }
        int maxx = INT_MIN;
        for(int i = 0; i < n; i++){
            int b = 0;
            data tmp = a[i];
            for(int j = 0; j < i; j++){
                if(tmp.w > a[j].w && tmp.c < a[j].c){
                    b = max(b, check[j]);
                }
            }
            check[i] = b + 1;
            maxx = max(maxx, check[i]);
        }
        cout << maxx << endl;
    }
}
