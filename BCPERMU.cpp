#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}
void khoitao(int a[], int n){
    for(int i = 1; i <= n; i++){
        a[i] = i;
    }
}
void in(int a[], int n){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
// void sapxep(int a[], int n, int pos){
//     sort(a + pos, a + n);
// }
void sapxep(int a[], int n, int pos){
    for(int i = pos; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
int main()
{
    faster;
    int n;
    cin >> n;
    int a[n];
    khoitao(a, n);
    in(a,n);
    while(1 > 0){
        int i;
        for(i = n ; i > 0; i--){
            if(i == 1){
                return 0;
            }
            if(a[i] > a[i - 1]){
                break;
            }
        }
        for(int j = n; j >= i; j--){
            if(a[j] > a[i - 1]){
                swap(a[i - 1], a[j]);
                sapxep(a,n,i);
                in(a,n);
                break;
            }
        }
    }
}
