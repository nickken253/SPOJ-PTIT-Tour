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
    map<string, int> ss;
    int n, dem = 0;
    cin >> n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string a;
        cin >> a;
        ss[a]++;
        // cout << a << ": " << ss[a] << " " << i - ss[a] << " " << ss[a] - 2 << endl;
        if(i - ss[a] < ss[a] - 2){
            dem++;
        }
    }
    cout << dem;
}
