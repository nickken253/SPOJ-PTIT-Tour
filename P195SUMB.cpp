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
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int dem1 = 0, dem2 = 0;
    int i = 0, j = n - 1;
    int check[n];
    while(true){
        if(i == j) {
            dem1++;
            break;
        }
        if(j - i == 1){
            dem1 ++, dem2++;
            break;
        }
        if(a[i] < a[j]){
            a[j] = a[j] - a[i];
            dem1 ++;
            i++;
        }
        else if(a[i] > a[j]){
            a[i] = a[i] - a[j];
            dem2 ++;
            j--;
        }
        else{
            dem1 ++, dem2++;
            if(j - i == 2){
                i++;
                dem1++;
                break;
            }
            i++;
            j--;
        }
    }
    cout << dem1 << " " << dem2;
}
