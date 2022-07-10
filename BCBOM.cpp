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
    while(3 > 0){
        int a,b;
        cin >> a >> b;
        char banDo[a][b];
        int dem[a][b] = {};
        if(a == 0 && b == 0){
            break;
        }
        for(int i = 0; i < a;i ++){
            for(int j = 0; j < b; j++){
                cin >> banDo[i][j];
            }
        }
        for(int i = 0; i < a;i ++){
            for(int j = 0; j < b; j++){
                if(banDo[i][j] == '*'){
                    if(i >= 0 && i < a - 1){
                        if(banDo[i + 1][j] != '*') dem[i + 1][j]++;
                        if(j >= 0 && j < b - 1){
                            if(banDo[i + 1][j + 1] != '*') dem[i + 1][j + 1]++;
                        }
                        if(j > 0 && j <= b - 1){
                            if(banDo[i + 1][j - 1] != '*') dem[i + 1][j - 1]++;
                        }
                    }
                    if(i > 0 && i <= a - 1){
                        if(banDo[i - 1][j] != '*') dem[i - 1][j]++;
                        if(j >= 0 && j < b - 1){
                            if(banDo[i - 1][j + 1] != '*') dem[i - 1][j + 1]++;
                        }
                        if(j > 0 && j <= b - 1){
                            if(banDo[i - 1][j - 1] != '*') dem[i - 1][j - 1]++;
                        }
                    }
                    if(j >= 0 && j < b - 1){
                        if(banDo[i][j + 1] != '*') dem[i][j + 1]++;
                    }
                    if(j > 0 && j <= b - 1){
                        if(banDo[i][j - 1] != '*') dem[i][j - 1]++;
                    }
                    continue;
                }

            }
        }
        for(int i = 0; i < a;i ++){
            for(int j = 0; j < b; j++){
                if(banDo[i][j] == '*'){
                    cout << "*";
                    continue;
                }
                cout << dem[i][j];
            }
            cout << endl;
        }
    }
}
