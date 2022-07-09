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
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int dem = 0;
    for (int i = 0, j = n - 1; i < n, j >= 0; )
    {
        if(a[i] == a[j]){
            i++;
            j--;
            if(i >= j) break;
        }
        else if(a[i] > a[j]){
            dem++;
            a[j - 1] += a[j];
            j--;
        }
        else if(a[i] < a[j]){
            dem++;
            a[i + 1] += a[i];
            i++;
        }
    }
    cout << dem;
}
