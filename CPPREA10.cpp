#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        string a;
        cin >> a;
        int kq[a.size() + 1], pos;
        kq[0] = 1;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'D'){
                if(i != 0 && a[i - 1] == 'I'){
                    pos = i;
                }
                
                kq[i + 1] = kq[i] - 1;
                if(kq[i + 1] == 0){
                    kq[i] ++;
                    i = pos;
                }
            }
            if(a[i] == 'I'){
                kq[i + 1] = kq[i] + 1;
            }
        }
        for(int i = 0; i < a.size() + 1; i++)
        {
            cout << kq[i];
        }
        cout << endl;
    }
}