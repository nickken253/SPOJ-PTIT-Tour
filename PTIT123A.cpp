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
    do
    {
        getline(cin, a);
        if (a == ".")
            break;
        vector<string> st;
        vector<string> so;
        vector<string> chu;
        string b = "";
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == ',' || a[i] == '.')
            {
                st.push_back(b);
                i++;
                b = "";
            }
            else
            {
                b += a[i];
            }
        }
        int n = st.size(), maxx = INT_MIN;
        int check[n] = {};
        for (int i = 0; i < st.size(); i++)
        {
            if (st[i].back() >= '0' && st[i].back() <= '9')
            {
                check[i] = 1;
                so.push_back(st[i]);
                int kk = st[i].size();
                maxx = max(kk, maxx);
            }
            else
            {
                chu.push_back(st[i]);
            }
        }
        for(int i = 0; i < so.size(); i++){
            while(so[i].size() < maxx) so[i] = '0' + so[i];
        }
        sort(so.begin(), so.end());
        sort(chu.begin(), chu.end());
        for(int i = 0; i < so.size(); i++){
            while(so[i][0] == '0' && so[i].size() > 1) so[i].erase(so[i].begin());
        }
        int ss = 0, cc = 0;
        for (int i = 0; i < n; i++)
        {
            if (check[i] == 1)
            {
                cout << so[ss];
                ss++;
            }
            else{
                cout << chu[cc];
                cc++;
            }
            if(i != n - 1){
                cout << ", ";
            }
            else cout << ".";
        }
        cout << endl;
    } while (true);
}
