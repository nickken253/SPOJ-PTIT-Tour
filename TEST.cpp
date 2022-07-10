#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    int maxx = INT_MIN;
    int n, m, dem = 0;
    cin >> m;
    if(m != 42){
        do{
            if(dem == 0){
                cout << m << endl;
                maxx = m;
            }
            cin >> n;
            if(n == 42){
                break;
            }
            if(n > maxx){
                maxx = n;
                cout << n << endl;
            }
            dem ++;
        }while(n != 42);
    }
}