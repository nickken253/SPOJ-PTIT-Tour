#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//NOT_DONE__________________

// QUAY_LUI__________
//  int tx[8] = {1, 1, 2, 2, -1, -1, -2, -2};
//  int ty[8] = {2, -2, 1, -1, 2, -2, 1, -1};

int tx[8] = {2, 2, 1, 1, -1, -1, -2, -2};
int ty[8] = {1, -1, 2, -2, 2, -2, 1, -1};

// int tx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
// int ty[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };

int a[9][9] = {};
int ts[65] = {};
int n, x, y;

void init(){
	cin >> n >> x >> y;
}
void in(){
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}
int dem = 0, check = 0;
void jump(int k, int x, int y)
{
    // cout << "jump: " << x << " " << y << ": " << k << endl;
    for (int i = 0; i < 8 && check != 0; i++)
    {
        int ax = x + tx[i];
        int ay = y + ty[i];
        // dem++;
        if (ax >= 0 && ax < n && ay >= 0 && ay < n && a[ax][ay] == 0)
        {
            // cout << a[ax][ay] << " ";
            // check = 0;
            a[ax][ay] = k;
            // cout << ax << " " << ay << ": " << k << endl;
            if (k <= n * n)
            {
                // cout << "check " << endl;
                jump(k + 1, ax, ay);
                // cout << "b   : " << ax << " " << ay  << ": " << k << endl;
                // if(check == 1){
                    // a[ax][ay] = 0;
                //     // cout << "end at: " << ax << " " << ay << endl; 
                //     check = 0;
                // }
            }
            else{
                in();
                check = 1;
            }
        }
        a[ax][ay] = 0;
    }
}
int main()
{
    faster;
    // init();
    cin >> n >> x >> y;
    // a[x][y] = 1;
    // ts[1] = 1;
    jump(0, x, y);
    for (int i = 0; i <= 8; i++)
    {
        for (int j = 0; j <= 8; j++)
        {
            // ts[a[i][j]]++;
            cout << setfill('0') << setw(2) << a[i][j] << " ";
        }
        cout << endl;
    }
    // for(int i = 1; i <= n * n; i++){
    //     cout << i << ":" << ts[i]  << " ";
    // }
}
