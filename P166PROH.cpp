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
    int big = 3005;
    vector<int> check(big + 10, 0);
    vector<int> ngto(big, 0);
    check[0] = check[1] = 1;
    for(int i = 2; i <= big; i++){
        if(check[i] == 0){
            for(int j = i * 2; j <= big; j+=i){
                check[j] = 1;
                ngto[j]++;
            }
        }
    }
    int n;
    cin >> n;
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(ngto[i] == 2) dem++;
    }
    cout << dem;
}
