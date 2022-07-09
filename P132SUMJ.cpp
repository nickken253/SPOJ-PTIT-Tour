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
void swap(char &a, char &b){
    char tmp = a;
    a = b;
    b = tmp;
}
void sapxep(int n, int pos){
    for(int i = pos; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(a[i] > a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
int main()
{
    faster;
    cin >> a;
    int i;
    for(i = a.size() - 1; i >= 0; i--){
        if(i == 0){
            cout << "0";
            return 0;
        }
        if(a[i] > a[i - 1]){
            break;
        }
    }
    for(int j = a.size() - 1; j >= i; j --){
        if(a[j] > a[i - 1]){
            swap(a[i - 1], a[j]);
            sapxep(a.size(), i);
        }
    }
    cout << a;
}
