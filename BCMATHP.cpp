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
    int a, b;
    cin >> a >> b;
    if(b == 1) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 0 || i % 10 == 4 || i % 10 == 7){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 2) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 1 || i % 10 == 8){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 3) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 5){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 4) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 2){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 5) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 9){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 6) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 6){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 7) {
        for(int i = a + 1; i < 63; i++){
            if(i == 46 || i == 56){
                cout << i;
                return 0;
            }
        }
    }
    if(b == 8) {
        for(int i = a + 1; i < 63; i++){
            if(i % 10 == 3){
                cout << i;
                return 0;
            }
        }
    }
    // if(b == 9) {
    //     for(int i = a + 1; i < 63; i++){
    //         if(i == 53){
    //             cout << i;
    //             return 0;
    //         }
    //     }
    // }
    // cout << "0";
}
