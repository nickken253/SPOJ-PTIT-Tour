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
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string a, b = "";
        int check = 0;
        cin >> a;
        transform(a.begin(), a.end(), a.begin(), ::toupper);
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'A' || a[i] == 'B' || a[i] == 'C') b += '2';
            if(a[i] == 'D' || a[i] == 'E' || a[i] == 'F') b += '3';
            if(a[i] == 'G' || a[i] == 'H' || a[i] == 'I') b += '4';
            if(a[i] == 'J' || a[i] == 'K' || a[i] == 'L') b += '5';
            if(a[i] == 'M' || a[i] == 'N' || a[i] == 'O') b += '6';
            if(a[i] == 'P' || a[i] == 'Q' || a[i] == 'R' || a[i] == 'S') b += '7';
            if(a[i] == 'T' || a[i] == 'U' || a[i] == 'V') b += '8';
            if(a[i] == 'W' || a[i] == 'X' || a[i] == 'Y' || a[i] == 'Z') b += '9';
        }
        cout << b << endl;
        for(int i = 0; i < b.size() / 2; i++){
            if(b[i] != b[b.size() - 1 - i]){
                cout << "NO";
                check = 1;
                break;
            }
        }
        if(check == 0) cout << "YES";
        cout << endl;
    }
}

