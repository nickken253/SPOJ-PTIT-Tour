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
    
    vector<int> check(55, 0);
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= 50; i++){
        if(check[i] == 0){
            for(int j = i * 2; j <= 50; j+=i){
                check[j] = 1;
            }
        }
    }
    int a, b;
    cin >> a >> b;
    for(int i = a + 1; i < b; i++){
        if(check[i] == 0){
            cout << "NO";
            return 0;
        }
    }
    if(check[b] == 1){
        cout << "NO";
        return 0;
    }
    cout << "YES";
}
