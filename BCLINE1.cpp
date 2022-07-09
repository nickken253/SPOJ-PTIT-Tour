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
    int n, a, b;
    cin >> n >> a >> b;
    int dem[n] = {}, check = 0;
    for (int i = a; i < n; i++)
    {
        dem[i]++;
    }
    for (int i = n - 1 - b; i < n; i++)
    {
        dem[i]++;
    }
    for (int i = n - 1 - b; i < n; i++){
        if(dem[i] == 2){
            check++;
        }
    }
    cout << check;
}
