#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

ll nhan(ll a, ll b){

}
int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    cin.ignore();
    string a;
    cin >> a;
    int dg = 0, dk = 0;
    for(int i = 0; i < n / 2; i++){
        if(a[i] == a[n - i - 1]) dg++;
        else dk++;
    }
    if(n % 2 != 0) dg++;
    // cout << dg << " " << dk << endl;
    if(n < k) cout << "No";
    else if(n == k) cout << "Yes";
    else{
        int check = 0;
        for(int i = 0; i <= dk; i++){
            int doi = i + 2 * (dk - i);
            if(doi == k){
                check = 1;
                break;
            }
            else{
                if(doi < k){
                    int du = k - doi;
                    int doig = dg * 2;
                    if(n % 2 == 0){
                        if(du <= doig && du % 2 == 0){
                            check = 1;
                            break;
                        }
                    }
                    else{
                        if(du <= doig * 2 + 1){
                            check = 1;
                            break;
                        }
                    }
                }
            }
        }
        if(check == 1) cout << "Yes";
        else cout << "No";
    }
}
