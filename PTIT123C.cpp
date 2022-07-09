#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct ck{
    int gtri, vtri;
};
bool cmp(ck a, ck b){
    if(a.gtri == b.gtri) return a.vtri < b.vtri;
    return a.gtri < b.gtri;
}
bool cmp2(int a, int b){
    return a > b;
}
int main()
{
    faster;
    int k = 1;
    while(true){
        int n, k1, k2;
        cin >> n >> k1 >> k2;
        if(n == 0 && k1 == 0 && k2 == 0) break;
        ck a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i].gtri;
            a[i].vtri = i + 1;
        }
        sort(a, a + n, cmp);
        // for(int i = 0; i < n; i++){
        //     cout << a[i].gtri << " ";
        // }
        // cout << endl;
        // for(int i = 0; i < n; i++){
        //     cout << a[i].vtri << " ";
        // }
        vector<int> minn;
        vector<int> maxx;
        for(int i = 0; i < k1; i++){
            minn.push_back(a[i].vtri);
        }
        for(int i = n - 1; i >= n - k2; i--){
            maxx.push_back(a[i].vtri);
        }
        sort(minn.begin(), minn.end());
        sort(maxx.begin(), maxx.end(), cmp2);
        cout << "Case " << k << endl;
        k++;
        for(auto i : minn) cout << i << " ";
        cout << endl;
        for(auto i : maxx) cout << i << " ";
        cout << endl;
    }
    

}
