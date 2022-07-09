#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long


//NOT_DONE____________
int main()
{
    faster;
    int n, k1, k2;
    do{
        cin >> n >> k1 >> k2;
        if( n == 0 && k1 == 0 && k2 == 0) break;
        int a[n];
        map<int, int> ss;
        multiset<int> sxep;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            ss[a[i]] = i;
            sxep.insert(a[i]);
        }
        int k = 0;
        for(auto i : sxep){
            a[k] = i;
            k++;
        }
        for(int i = 0; i < k1; i++){
            cout << ss[a[i]] << " ";
        }
        // for(int i = 0; i < k1; i++){
        //     cout << ss[a[i]] << " ";
        // }
        cout << endl;
    }
    while(true);
}
