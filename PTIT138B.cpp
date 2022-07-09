#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct giaPha{
    int tuoiCha, tuoiCon, tuoiSinh;
    string tenCha, tenCon;
    void nhap(){
        cin >> tenCha >> tenCon >> tuoiSinh;
    }
    void in(){
        cout << tenCon << " " << tuoiCon << endl;
    }
};
bool cmp(giaPha a, giaPha b){
    if(a.tuoiCon == b.tuoiCon){
        return a.tenCon < b.tenCon;
    }
    return a.tuoiCon > b.tuoiCon;
}
int n;
giaPha a[105];
void tinh(string ten, int gap){
    for(int i = 0; i < n; i ++){
        if(ten == a[i].tenCha){
            if(ten == "Ted"){
                a[i].tuoiCon = 100 - a[i].tuoiSinh;
                gap = 100 - a[i].tuoiSinh;
                tinh(a[i].tenCon, gap);
            }
            else{
                a[i].tuoiCon = gap - a[i].tuoiSinh;
                tinh(a[i].tenCon, gap - a[i].tuoiSinh);
            }
        }
    }
}
int main()
{
    int t;
    cin >> t;
    int k = 1;
    while(t--){
        cin >> n;
        cin.ignore();
        for(int i = 0; i < n; i++){
            a[i].nhap();
        }
        tinh("Ted", 0);
        sort(a, a + n, cmp);
        cout << "DATASET " << k << endl;
        for(int i = 0; i < n; i++){
            a[i].in();
        }
        k++;
    }
}
