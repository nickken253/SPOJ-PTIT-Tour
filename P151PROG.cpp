#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

//NOT_DONE____________
int main()
{
    faster;
    int n;
    cin >> n;
    // int a[n];
    string c[n];
    for(int i = 0; i < n; i++){
        int a, b;
        cin >> a >> b;
        c[i] = "";
        c[i] = c[i] + to_string(a) + 'x' + to_string(b); 
        cout << c[i] << endl;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(c[i].back() == c[j][0]){

                c[i] = c[i] + c[j];
            }
        }
    }
}
