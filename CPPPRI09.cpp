#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

int main(){
    faster;
    int big = 100007;
    vector<int> ngto(big + 1, 0);
    vector<int> so(big + 1);
    ngto[0] = ngto[1] = 1;
    for(int i = 2; i * i <= big; i++){
        if(ngto[i] == 0){
            for(int j = i * i; j <= big; j += i){
                ngto[j] = 1;
            }
        }
    }
    int k = 0;
    for(int i = 0; i <= big; i ++){
        if(ngto[i] == 0){
            so[k] = i;
            k++;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        for(int i = 0; i <= sqrt(n); i++){
            int dem = 0;
            while(n % so[i] == 0){
                dem++;
                n /= so[i];
            }
            if(dem != 0){
                cout << so[i] << " " << dem << " ";
            }
        }
        if(n != 1){
            cout << n << " 1";
        }
        cout << endl;
    }
}