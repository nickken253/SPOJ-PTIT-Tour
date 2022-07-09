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
    long double vtri;
    int ttu;
};
bool cmp(data a, data b){
    return a.vtri < b.vtri;
}
int main()
{
    faster;
    string a;
    cin >> a;
    long double l = 0, r = 1, pos = 0.5;
    int n = a.size();
    data mm[n];
    for(int i = 0; i < a.size(); i++){
        // cout << l << " - " << pos << " - " << r << endl;
        if(a[i] == 'l'){
            r = pos;
            mm[i].ttu = i + 1;
            mm[i].vtri = pos; 
            pos = (r + l) / 2;
        }
        else{
            l = pos;
            mm[i].ttu = i + 1;
            mm[i].vtri = pos;
            pos = (r + l) / 2;
            
        }
    }
    sort(mm, mm + n, cmp);
    for(int i = 0; i < n; i++){
        cout << mm[i].ttu << " ";
    }
    // for(int i = 0; i < n; i++){
    //     if(a[i] == 'r') cout << i + 1 << " ";
    // }
    // for(int i = n - 1; i >= 0; i--){
    //     if(a[i] == 'l') cout << i + 1 << " ";
    // }
}
