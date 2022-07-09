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
    int dai = 0, tong = 0;
};
int main()
{
    faster;
    int n;
    cin >> n;
    int a[n], maxx = INT_MIN, maxxDai = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
        maxx = max(maxx, a[i]);
    }
    for(int i = 0; i < n; i++){
        a[i] -= maxx;
    }
    data b[100005];
    int j = 0;
    for(int i = 0; i < n; i++){
        if(a[i] >= 0){
            b[j].dai++;
            b[j].tong += a[i];
        }
        else j++;
    }
    maxx = INT_MIN;
    for(int i = 0; i <= j; i++){
        if(maxx <= b[i].tong && maxxDai <= b[i].dai){
            maxx = b[i].tong;
            maxxDai = b[i].dai;
        }
    } 
    cout << maxxDai;
}