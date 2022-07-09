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
    int n, maxx = INT_MIN;
    cin >> n;
    cin.ignore();
    vector<string> a(5000006);
    string b;
    multiset<string> ss;
    multiset<string> ss2;
    int k = 0;
    for(int i = 0; i < n; i++){
        cin >> b;
        b += 'a';
        // cout << "check 1\n";
        for(int j = 0; j < b.size(); j++){
            // cout << "check 2\n";
            if(b[j] >= '0' && b[j] <= '9'){
                // cout << b[j] << endl;
                a[k] = a[k] + b[j];
            }
            if((b[j] >= 'a' && b[j] <= 'z')  && (b[j - 1] >= '0' && b[j - 1] <= '9') ){
                // cout << "check" << a[k] << endl;
                int lgt = a[k].size();
                maxx = max(maxx, lgt);
                ss.insert(a[k]);
                k++;
            }
        }
    }
    // cout << maxx << endl;
    for(auto i : ss){
        while(i.size() < maxx) i = '0' + i;
        ss2.insert(i);
    }
    for(auto i : ss2){
        while(i.size() != 1 && i.front() == '0'){
            i.erase(i.begin());
        }
        cout << i << endl;
    };
}
