#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
char a[105][105];
int check(int i, int j){
    int dem = 0;
    if(a[i + 1][j] == 'o') dem++;
    if(a[i - 1][j] == 'o') dem++;
    if(a[i][j + 1] == 'o') dem++;
    if(a[i][j - 1] == 'o') dem++;
    if(dem % 2 == 0) return 1;
    else return 0;
}
int main()
{
    faster;
    int n;
    cin >> n;
    for(int i = 0; i < n + 2; i++){
        for(int j = 0; j < n + 2; j++){
            a[i][j] = 'x';
        }
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 1; i < n + 1; i++){
        for(int j = 1; j < n + 1; j++){
            if(check(i,j) == 0){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}
