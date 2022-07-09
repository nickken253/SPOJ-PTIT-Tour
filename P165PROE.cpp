#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct testt{
    ll diem, baiKtra;
    void nhap(){
        cin >> diem >> baiKtra;
    }
};
bool cmp(testt a, testt b){
    return a.baiKtra <= b.baiKtra;
}
int main()
{
    faster;
    ll n, r, avg, tongDiem = 0;
    cin >> n >> r >> avg;
    testt a[n];
    for(ll i = 0; i < n; i++){
        a[i].nhap();
        tongDiem += a[i].diem;
    }
    sort(a, a + n, cmp);
    ll sum = n * avg;
    sum -= tongDiem;
    ll dem = 0;
    for(ll i = 0; i < n; i++){
        if(sum <= 0) break;
        ll tt = (r - a[i].diem);
        if(sum >= tt){
            dem += tt * a[i].baiKtra;
            sum -= tt;
        }
        else{
            dem += sum * a[i].baiKtra;
            sum = 0;
        }
    }
    cout << dem;
}

