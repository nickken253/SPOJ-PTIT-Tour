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
    int m, s;
    cin >> m >> s;
    if(s == 0 || s > 9 * m){
        cout << "-1 -1";
        return 0;
    }
    int maxx = 9;
    string a = "";
    while(s != 0){
        if(s > 9) maxx = 9;
        else maxx = s;
        char k = maxx + '0';
        a = a + k;
        s -= maxx;
    }
    while(a.size() < m) a = a + '0';
    string b = a;
    reverse(b.begin(), b.end());
    if(b[0] == '0'){
        for(int i = 0; i < b.size(); i++){
            if(b[i] != '0'){
                b[i] = b[i] - 1;
                break;
            }
        }
        b[0] = '1';
    }
    cout << b << " " << a;
}
