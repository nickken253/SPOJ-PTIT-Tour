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
    int a, b;
    cin >> a >> b;
    if(a == b){
        cout << "infinity";
        return 0;
    }
    a -= b;
    int dem = 0;
    for(int i = 1; i < sqrt(a); i++){
        if(a % i == 0){
            if(i > b) dem++;
            if(a / i > b) dem ++;
        }
    }
    float k = sqrt(a);
    if(ceil(k) * ceil(k) == a) dem++;
    cout << dem;
}
