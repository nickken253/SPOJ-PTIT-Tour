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
    do{
        cin >> a;
        int yes = 0, no = 0, quo = 0;
        if(a == "#") break;
        for(int i = 0; i < a.size(); i++){
            if(a[i] == 'Y') yes++;
            else if(a[i] == 'N') no++;
            else if(a[i] == 'A') quo++;
        }
        if(quo >= (a.size() - quo)){
            cout << "need quorum";
        }
        else {
            if(yes >  no) cout << "yes";
            if(no > yes) cout << "no";
            if(yes == no) cout << "tie";
        }
        cout << endl;
    }
    while(a != "#");
}
