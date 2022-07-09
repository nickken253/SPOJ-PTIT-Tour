#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct timee{
    int gtri, vtri;
};

bool cmp(timee a, timee b){
    if(a.gtri == b.gtri){
        return a.vtri < b.vtri;
    }
    return a.gtri > b.gtri;
}
int main()
{
    faster;
    int n, k;
    cin >> n >> k;
    timee a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i].gtri;
        a[i].vtri = i + 1;
    }
    sort(a, a + n, cmp);
    set<int> ss;
    int minn = INT_MAX;
    for(int i = 0; i < k; i++){
        ss.insert(a[i].vtri);
        minn = min(minn, a[i].gtri);
    }
    cout << minn << endl;
    for(auto i : ss) cout << i << " ";
}
