#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct team{
    string ten;
    int diem;
    void nhap(){
        cin >> ten >> diem;
    }
    
};
bool cmp(team a, team b){
    if(a.diem == b.diem){
        return a.ten < b.ten;
    }
    else return a.diem > b.diem;
}
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        int n;
        cin >> n;
        string tenA, tenB;
        int diemA, diemB;
        team a[n];
        cin >> tenA >> tenB;
        for(int i = 0; i < n; i ++){
            a[i].nhap();
            if(a[i].ten == tenA){
                diemA = a[i].diem;
            }
            if(a[i].ten == tenB){
                diemB = a[i].diem;
            }
        }
        //-------------WIN
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                a[i].diem = diemA + 3;
            }
            if(a[i].ten == tenB){
                a[i].diem = diemB;
            }
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                cout << i + 1 <<" ";
            }
        }
        //-------------LOSE
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                a[i].diem = diemA;
            }
            if(a[i].ten == tenB){
                a[i].diem = diemB + 3;
            }
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                cout << i + 1 <<" ";
            }
        }
        //-------------Hòa
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                a[i].diem = diemA + 1;
            }
            if(a[i].ten == tenB){
                a[i].diem = diemB + 1;
            }
        }
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i ++){
            if(a[i].ten == tenA){
                cout << i + 1<<" ";
            }
        }
        cout << endl;
    }
}