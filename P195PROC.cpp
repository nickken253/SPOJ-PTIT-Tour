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
    ll n;
    cin >> n;
    int a[n];
    int phat[n], diem = 0, bai = 0, timee = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n);
    phat[0] = a[0];
    for(int i = 1; i < n; i++){
        phat[i] = phat[i - 1] + a[i];
    }
    for(int i = 0; i < n; i++){
        if(timee + a[i] <= 300){
            timee += a[i];
            bai++;
            diem += phat[i];
            // cout << diem << endl;
        }
    }
    cout << bai << " " << diem;
}
