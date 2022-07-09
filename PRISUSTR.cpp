#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

string a;
int main()
{
    faster;
    int big = 100000;
    vector<int> check(big + 5, 0);
    vector<string> ngto(big + 5);
    check[0] = check[1] = 1;
    for(int i = 2; i * i <= big; i ++){
        if(check[i] == 0){
            for(int j = i * 2; j <= big; j += i){
                check[j] = 1;
            }
        }
    }
    int k = 1;
    for(int i = 2; i <= big; i ++){
        if(check[i] == 0){
            ngto[k] = to_string(i);
            k++;
        }
    }
    string a;
    do{
        int check = 0;
        cin >> a;
        if(a == "0") break;
        for(int i = k - 1; i >= 1; i--){
            if((int)a.find(ngto[i]) != -1){
                cout << ngto[i] << endl;
                check = 1;
                break;
            }
        }
    }
    while(true);
}

