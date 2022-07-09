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
    int bc = n * m / __gcd(n, m);
    int p = bc / n, ned = bc / m;
    int dem = 0, du = 0;
    for(int i = 0; i < m; i++){
        int pi;
        if(du < ned){
            pi = p + du;
        }
        else pi = du;
        while(pi < ned) pi += p;
        if(pi > ned){
            dem++;
            du = pi - ned;
        }
        else du = 0;
        // cout << pi << " " << du << endl;
    }
    cout << dem;
}