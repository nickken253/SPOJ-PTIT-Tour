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
    int n;
    cin >> n;
    cin.ignore();
    while(n--){
        int ts[27] = {}, maxx = INT_MIN, dem = 0, pos;
        string a;
        getline(cin, a);
        for(int i = 0; i < a.size(); i++){
            if(a[i] != ' '){
                ts[a[i] - 'A']++;
                maxx = max(maxx, ts[a[i] - 'A']);
            }
            
        }
        // cout << maxx << endl;
        for(int i = 0; i < 27; i++){
            if(ts[i] == maxx) dem++, pos = i;
        }
        // cout << pos << endl;
        if(dem > 1){
            cout << "NOT POSSIBLE" << endl;
            continue;
        }
        int d = (pos + 'A') - 'E';
        int jump = d;
        if(d < 0) d += 26;
        cout << d << " ";
        for(int i = 0; i < a.size(); i++){
            if(a[i] != ' '){
                a[i] = a[i] - d;
                if(a[i] < 'A') a[i] += 26;
                // if(a[i] - d < 'A') a[i] += 3;
                cout << a[i];
            }
            else cout << " ";
            
        }
        cout << endl;
    }
}
//A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
