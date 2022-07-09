#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct data{
    int gtri, vtri;
};
bool cmp(data a, data b){
    return a.gtri < b.gtri;
}
bool cmp2(int a, int b){
    return a < b;
}
int main()
{
    faster;
    int n, m;
    cin >> n >> m;
    int a[n], b[m];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < m; i++){
        cin >> b[i];
    }
    vector<int> ss;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i] == b[j]) ss.push_back(a[i]);
        }
    }
    for(auto i : ss) cout << i << " ";
}
