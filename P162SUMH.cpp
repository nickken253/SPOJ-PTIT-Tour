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
    string a;
    cin >> a;
    int dem = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C') dem += 3;
        else if(a[i] == 'D' || a[i] == 'E' || a[i] == 'F') dem += 4;
        else if(a[i] == 'G' || a[i] == 'H' || a[i] == 'I') dem += 5;
        else if(a[i] == 'J' || a[i] == 'K' || a[i] == 'L') dem += 6;
        else if(a[i] == 'M' || a[i] == 'N' || a[i] == 'O') dem += 7;
        else if(a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') dem += 8;
        else if(a[i] == 'T' || a[i] == 'U' || a[i] == 'V') dem += 9;
        else if(a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') dem += 10;
    }
    cout << dem;
}
