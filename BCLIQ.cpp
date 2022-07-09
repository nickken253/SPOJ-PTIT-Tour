#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

bool cmp(string a, string b){
    return a  < b;
}
int main()
{
    faster;
    int n;
    cin >> n;
    int a[n], maxx[n], max1 = INT_MIN;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    maxx[0] = 1;
    for(int i = 1; i < n; i++){
        int max2 = 0;
        for(int j = 0; j < i; j++){
            if(a[i] > a[j]){
                if(maxx[j] > max2){
                    max2 = maxx[j];
                }
            }
        }
        maxx[i] = max2 + 1;
        max1 = max(maxx[i], max1);
    }
    cout << max1;
}
