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
    int n, a, b;
    cin >> n >> a >> b;
    int aa[n], dem = 0;
    for(int i = 0; i < n; i++){
        cin >> aa[i];
        if(aa[i] == 1){
            if(a > 0) a--;
            else{
                if(b > 0) b--, a++;
                else dem++;
            }
        }
        else{
            if(b > 0) b--;
            else dem += 2;
        }
    }
    cout << dem;
}
