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
    int n, m;
    cin >> n >> m;
    int a, b;
    map<int, int> tanSo;
    vector<int> so;
    for(int i = 0; i < n; i++){
        cin >> a;
        if(tanSo[a] == 0){
            so.push_back(a);
        }
        tanSo[a]++;
    }
    sort(so.begin(), so.end());
    for(int i = 1; i < so.size(); i++){
        tanSo[so[i]] += tanSo[so[i - 1]];
        // cout << tanSo[so[i]] << endl;
    }
    // for(auto i : so) cout << tanSo[i] << " ";
    for(int i = 0; i < m; i++){
        cin >> b;
        int check = 0;
        for(int i = b; i >= 0; i--){
            if(tanSo[i] != 0){
                cout << tanSo[i];
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "0";
        cout << endl;
    }
}