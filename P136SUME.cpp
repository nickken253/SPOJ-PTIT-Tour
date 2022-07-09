#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct ds{
    int gt, tt, ts = 0;
};
bool cmp(ds a, ds b){
    if(a.ts == b.ts){
        return a.tt < b.tt;
    }
    return a.ts > b.ts;
}
int main()
{
    faster;
    int n, c;
    cin >> n >> c;
    ds m;
    vector<ds> a;
    for(int i = 0; i < n; i++){
        cin >> m.gt;
        int ktra = 0;
        for(int j = 0; j < a.size(); j++){
            if(a[j].gt == m.gt){
                a[j].ts ++;
                ktra = 1;
                break;
            }
        }
        if(ktra == 0){
            m.ts = 1;
            m.tt = i;
            a.push_back(m);
        }

    }
    sort(a.begin(), a.end(), cmp);
    for(int i = 0; i < a.size(); i++){
        // cout << a[i].gt << " " << a[i].ts << " " << a[i].tt << endl;
        while(a[i].ts--){
            cout << a[i].gt << " ";
        }
    }
}
