#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct ds{
    int gt, tt, ts = 0;
};
bool cmp(ds a, ds b){
    if(a.ts == b.ts){
        return a.tt < b.tt;
    }
    return a.ts > b.ts;
}
int main()
{
    faster;
    int n;
    cin >> n;
    char a[35];
    for(int i = 1; i <= 34; i++){
        a[i] = '#';
    }
    for(int i = 1; i <= n; i++){
        a[i] = 'O';
    }
    int k;
    cout << "+------------------------+\n";
    for(int i = 1; i <= 4; i++){
        cout << "|" <<a[i] << ".";
        if(i != 3){
            if(i != 4) k = 4;
            else k = 3;
            for(int j = i + k; j <= 32 + i; j += 3){
                cout << a[j] << ".";
            }
        }
        else{
            for(int j = k; j <= 34; j += 3){
                cout << "..";
            }
        }
        if(i == 1) cout << "|D|)";
        else if( i == 2) cout << "|.|";
        else if( i == 3) cout << "|";
        else if( i == 4) cout << "|.|)";
        cout << endl;
    }
    cout << "+------------------------+";
}
// +------------------------+
// |O.O.O.O.O.O.O.#.#.#.#.|D|)
// |O.O.O.O.O.O.#.#.#.#.#.|.|
// |O.......................|
// |O.O.O.O.O.O.#.#.#.#.#.|.|)
// +------------------------+