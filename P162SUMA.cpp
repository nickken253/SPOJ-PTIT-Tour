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

int main()
{
    faster;
    int a[10] = {};
    for (int i = 0; i < 6; i++)
    {
        int n;
        cin >> n;
        a[n]++;
    }
    int checkVoi = 0, checkChan = 0;
    for (int i = 0; i < 10; i++)
    {
        if (a[i] >= 4)
        {
            checkChan = 1;
            a[i] -= 4;
            break;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        if (a[i] == 2)
        {
            checkVoi = 1;
            break;
        }
    }
    if (checkChan == 1)
    {
        if (checkVoi == 1)
            cout << "Elephant";
        else
            cout << "Bear";
    }
    else
        cout << "Alien";
}
