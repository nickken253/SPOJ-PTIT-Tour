#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct info{
    string ten;
    int dd, mm, yyyy;
    void nhap(){
        cin >> ten >> dd >> mm >> yyyy;
    }
    void in(){
        cout << ten << endl;
    }
};
bool cmp(info a, info b){
    if(a.yyyy == b.yyyy){
        if(a.mm == b.mm){
            return a.dd > b.dd;
        }
        else return a.mm > b.mm;
    }
    else return a.yyyy > b.yyyy;
}
int main()
{
    faster;
    int n;
    cin >> n;
    cin.ignore();
    info a[n];
    for(int i = 0; i < n; i++){
        a[i].nhap();
    }
    sort(a, a + n, cmp);
    a[0].in();
    a[n - 1].in();
}
