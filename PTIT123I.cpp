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
    int big = 1000006;
    vector<int> check(big + 10, 0);
    vector<int> dem(big + 10);
    dem[0] = 0;
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= big; i++){
        if(check[i] == 0){
            for(int j = i * 2; j <= big; j += i){
                check[j] = 1;
            }
        }
    }
    for(int i = 1; i <= big; i++){
        if(check[i] == 0) dem[i] = dem[i - 1] + 1;
        else dem[i] = dem[i - 1];
    }
    int n;
    do{
        cin >> n;
        if(n == 0) break;
        cout << dem[2 * n] - dem[n] << endl;
    }
    while(true);
}
