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
    string a;
    cin >> a;
    int ts[27]= {};
    for(int i = 0; i < a.size(); i++){
        ts[a[i] - 'a']++;
    }
    int dem = 0;
    vector<int> ss;
    for(int i = 0; i < 27; i++){
        if(ts[i] != 0){
            ss.push_back(ts[i]);
        }
    }
    sort(ss.begin(), ss.end());
    if(ss.size() < 3){
        cout << 0;
        return 0;
    }
    int sum = 0;
    for(int i = 0; i < ss.size() - 2; i++){
        sum += ss[i];
    }
    cout << sum;
}