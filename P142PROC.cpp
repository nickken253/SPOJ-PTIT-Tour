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
    int xa, xb, ya, yb;
    cin >> xa >> ya >> xb >> yb;
    xa --, ya--, xb--,yb--;
    int check[8][8] = {};
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if((i + j + 1) % 2 != 0) check[i][j] = 1;
        }
    }
    int demX = 0, demT = 0, demV = 0;
    // Quân Tịnh
    if(check[xa][ya] != check[xb][yb]) demT = 0;
    else{
        if(abs(xa - xb) == abs(ya - yb)) demT = 1;
        else demT = 2;
    }
    //Quân Xe
    if(xa == xb || ya == yb) demX = 1;
    else demX = 2;
    //Quân Tướng
    demV = max(abs(xa - xb), abs(ya - yb));
    cout << demX << " " << demT << " " << demV;
}
