#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

int tinh(int n){
    return n * (n - 1) / 2;
}
int main()
{
    faster;
    int n;
    cin >> n;
    char a[n][n];
    int cot[n] = {}, hang[n] = {};
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
            if(a[i][j] == 'C'){
                cot[j]++;
                hang[i]++;
            }
        }
    }
    int sum = 0;
    for(int i = 0; i < n; i++){
        if(cot[i] >= 2){
            sum += tinh(cot[i]);
            // cout << "cot: " <<i << " " << tinh(cot[i]) << endl;
        }
        if(hang[i] >= 2){
            sum += tinh(hang[i]);
            // cout << ": " <<i << " " << tinh(cot[i]) << endl;
        }
    }
    cout << sum;
}
