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
    while(true){
        string a;
        cin >> a;
        if(a == "#") break;
        string b = a;
        transform(b.begin(), b.end(), b.begin(), ::tolower); 
        string abc = "abcabc", def = "defdef", ghi = "ghighi";
        string jkl = "jkljkl", mno = "mnomno", pqrs = "pqrspqrs";
        string tuv = "tuvtuv", wxyz = "wxyzwxyz";
        string m = "";
        for(int i = 0; i < b.size(); i++){
            int k;
            if(b[i] - 'a' < 3) k = abc.find(b[i], 3), m = m + abc[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 6) k = def.find(b[i], 3), m = m + def[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 9) k = ghi.find(b[i], 3), m = m + ghi[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 12) k = jkl.find(b[i], 3), m = m + jkl[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 15) k = mno.find(b[i], 3), m = m + mno[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 19) k = pqrs.find(b[i], 4), m = m + pqrs[k - ((i + 1) % 4)];
            else if(b[i] - 'a' < 22) k = tuv.find(b[i], 3), m = m + tuv[k - ((i + 1) % 3)];
            else if(b[i] - 'a' < 26) k = wxyz.find(b[i], 4), m = m + wxyz[k - ((i + 1) % 4)];
        } 
        for(int i = 0; i < a.size(); i++){
            if(a[i] >= 'A' && a[i] <= 'Z'){
                m[i] -= 32;
            }
        } 
        cout << m << endl; 
    }
}
