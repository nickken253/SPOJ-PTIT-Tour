#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct timee{
    int hh,mm,ss;
    void nhap(){
        cin >> hh >> mm >> ss;
    }
    void xuat(){
        cout << hh << " " << mm << " " << ss << endl;
    }
};
bool cmp(timee a, timee b){
    if(a.hh == b.hh){
        if(a.mm == b.mm){
            return a.ss < b.ss;
        }
        return a.mm < b.mm;
    }
    return a.hh < b.hh;
}
int main()
{
    faster;
    int n;
    cin >> n;
    timee tgian[n];
    for (int i = 0; i < n; i++)
    {
        tgian[i].nhap();
    }
    sort(tgian, tgian + n, cmp);
    for(int i = 0; i < n; i++){
        tgian[i].xuat();
    }
}
