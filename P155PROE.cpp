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
    int dem = 1;
    string n;
    cin >> n;
    
    for(int i = 0; i < n.size(); i++){
        int a = n[i] - '0';
        switch (a)
        {
        case 0:
        case 2:
        
        case 6:
        case 9: 
            dem *= 2; break;
        case 1: dem *= 7; break;
        case 3:
        case 4: dem *= 3; break;
        case 5: dem *= 4; break;
        case 7: dem *= 5; break;
        default:
            break;
        }
    }
    // if(n[0] != n[1]) dem = dem * 2 - 1;
    // if(n == "70" || n == "07" || n == "10" || n == "01"  ) dem -= 3;
    cout << dem;
}
