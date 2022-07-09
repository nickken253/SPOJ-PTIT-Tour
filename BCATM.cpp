#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
bool cmp(int a, int b)
{
    return a > b;
}
int main()
{
    faster;
    int a, c, dem = 0;
    cin >> c >> a;
    int tien[c];
    for (int i = 0; i < c; i++)
    {
        cin >> tien[i];
    }
    sort(tien, tien + c, cmp);
    for(int i = 0; i < c; i++){
        if(a >= tien[i]){
            dem ++;
            a = a - tien[i];
        }
    }
    cout << dem << endl;
}