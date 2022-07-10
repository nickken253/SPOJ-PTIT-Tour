#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main()
{
    faster;
    int big = 100005;
    vector<int> check(big + 1, 0);
    vector<int> ngto(big + 1);
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= big; i++){
        if(check[i] == 0){
            for(int j = i * i; j <= big; j += i){
                check[j] = 1;
            }
        }
    }
    int k = 0;
    for(int i = 2; i <= big; i++){
        if(check[i] == 0){
            ngto[k] = i;
            k++;
        }
    }
    int t;
    cin >> t;
    while(t--){
        int dem = 0, n, sum;
        cin >> n;
        if(check[n] == 0){
            dem++;
        }
        for(int i = 0; ngto[i] < n; i++){
            sum = 0;
            for(int j = i; j < k; j++){
                sum += ngto[j];
                if(sum > n){
                    break;
                    dem = 0;
                }
                if(sum == n){
                    dem ++;
                }
            }
        }
        cout << dem << endl;
    }
}
