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
    char N, kt[36];
    string a, b = "pqwertyuiopq;asdfghjkl;a/zxcvbnm,./z";;
    int k;
    for(int i = 0; i < 36; i++){
        kt[i] = b[i];
    }
    //"pqwertyuiopq;asdfghjkl;a/zxcvbnm,./z"
    cin >> N >> a;
    for(int i = 0; i < a.size(); i++){
        if(a[i] == 'q'){
            if(N == 'R') cout << "p";
            else cout << "w";
        }
        else if(a[i] == 'w'){
            if(N == 'R') cout << "q";
            else cout << "e";
        }
        else if(a[i] == 'e'){
            if(N == 'R') cout << "w";
            else cout << "r";
        }
        else if(a[i] == 'r'){
            if(N == 'R') cout << "e";
            else cout << "t";
        }
        else if(a[i] == 't'){
            if(N == 'R') cout << "r";
            else cout << "y";
        }
        else if(a[i] == 'y'){
            if(N == 'R') cout << "t";
            else cout << "u";
        }
        else if(a[i] == 'u'){
            if(N == 'R') cout << "y";
            else cout << "i";
        }
        else if(a[i] == 'i'){
            if(N == 'R') cout << "u";
            else cout << "o";
        }
        else if(a[i] == 'o'){
            if(N == 'R') cout << "i";
            else cout << "p";
        }
        else if(a[i] == 'p'){
            if(N == 'R') cout << "o";
            else cout << "q";
        }
        else if(a[i] == 'a'){
            if(N == 'R') cout << ";";
            else cout << "s";
        }
        else if(a[i] == 's'){
            if(N == 'R') cout << "a";
            else cout << "d";
        }
        else if(a[i] == 'd'){
            if(N == 'R') cout << "s";
            else cout << "f";
        }
        else if(a[i] == 'f'){
            if(N == 'R') cout << "d";
            else cout << "g";
        }
        else if(a[i] == 'g'){
            if(N == 'R') cout << "f";
            else cout << "h";
        }
        else if(a[i] == 'h'){
            if(N == 'R') cout << "g";
            else cout << "j";
        }
        else if(a[i] == 'j'){
            if(N == 'R') cout << "h";
            else cout << "k";
        }
        else if(a[i] == 'k'){
            if(N == 'R') cout << "j";
            else cout << "l";
        }
        else if(a[i] == 'l'){
            if(N == 'R') cout << "k";
            else cout << ";";
        }
        else if(a[i] == ';'){
            if(N == 'R') cout << "l";
            else cout << "a";
        }
        else if(a[i] == 'z'){
            if(N == 'R') cout << "/";
            else cout << "x";
        }
        else if(a[i] == 'x'){
            if(N == 'R') cout << "z";
            else cout << "c";
        }
        else if(a[i] == 'c'){
            if(N == 'R') cout << "x";
            else cout << "v";
        }
        else if(a[i] == 'v'){
            if(N == 'R') cout << "c";
            else cout << "b";
        }
        else if(a[i] == 'b'){
            if(N == 'R') cout << "v";
            else cout << "n";
        }
        else if(a[i] == 'n'){
            if(N == 'R') cout << "b";
            else cout << "m";
        }
        else if(a[i] == 'm'){
            if(N == 'R') cout << "n";
            else cout << ",";
        }
        else if(a[i] == ','){
            if(N == 'R') cout << "m";
            else cout << ".";
        }
        else if(a[i] == '.'){
            if(N == 'R') cout << ",";
            else cout << "/";
        }
        else if(a[i] == '/'){
            if(N == 'R') cout << ".";
            else cout << "z";
        }
    }
}
