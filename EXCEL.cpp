#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string cot;
void chuyenCot(int a){
    if(a / 26 == 0 || a == 26){
        char b = a % 26 + 'A' - 1;
        if(a % 26 == 0){
            b = 'Z';
        }
        cot = b + cot;
    }
    else{
        char b = a % 26 + 'A' - 1;
        if(a % 26 == 0){
            b = 'Z';
            a--;
        }
        cot = b + cot;
        chuyenCot(a / 26);
    }
}
int main(){
    faster;
    int r,c;
    do{
        cot.erase();
        char ss;
        cin >> ss >> r >> ss >> c;
        if(r == 0 && c == 0){
            break;
        }
        chuyenCot(c);
        for(char i : cot) cout << i;
        cout << r  << endl;
    }
    while(r != 0 && c != 0);
}