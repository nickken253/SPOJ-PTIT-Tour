#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
int a[210] = {};
int check[40005] = {};
int main()
{
    faster;
    int n, s;
    cin >> n >> s;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    check[0] = 1;
    for (int i = 0; i < n; i++)
    {
        for(int j = s; j >= a[i]; j--){
            if(check[j - a[i]] == 1) check[j] = 1;
        }
    }
    if(check[s] != 0) cout << "YES";
    else cout << "NO";
    cout << endl;
}