#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main(){
    faster;
    int a, b, c;
    do{
        cin >> a >> b >> c;
        if(a == 0 && b == 0 && c == 0){
            break;
        }
        if(a + b > c && a + c > b && b + c > a){
            int maxx = max(a,max(b,c));
            if(maxx == a && b * b + c * c == a * a) cout << "right";
            else if(maxx == b && a * a + c * c == b * b) cout << "right";
            else if(maxx == c && b * b + a * a == c * c) cout << "right";
            else cout << "wrong";
        }
        cout << endl;
    }
    while(a != 0 && b != 0 && c != 0);
}

