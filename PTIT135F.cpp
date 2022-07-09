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
    int m, n;
    cin >> m >> n;
    int mm = 5 * m + 1, nn = 5 * n + 1;
    char a[mm][nn];
    for(int i = 0; i < mm; i++){
        for(int j = 0; j < nn; j++){
            cin >> a[i][j];
        }
    }
    int d1, d2, d3, d4, d5;
    d1 = d2 = d3 = d4 = d5 = 0;
    for(int i = 0; i < n; i++){
        int ii = i * 5 + 1;
        for(int j = 0; j < m; j++){
            int demS = 0;
            int jj = j * 5 + 1;
            for(int k = jj; k < jj + 4; k++){
                if(a[k][ii] == '*') demS ++;
            }
            if(demS == 0) d1++;
            else if(demS == 1) d2 ++;
            else if(demS == 2) d3 ++;
            else if(demS == 3) d4 ++;
            else if(demS == 4) d5 ++;
        }
    }
    cout << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5;
}
