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
    string a = "";
    do
    {
        getline(cin, a);
        int check = 0;
        if (a == ".")
            break;
        stack<char> ss;
        while(ss.size() != 0){
            ss.pop();
        }
        // cout << a << endl;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '(' || a[i] == '[')
            {
                ss.push(a[i]);
            }
            if (a[i] == ')')
            {
                if (ss.size() != 0 && ss.top() == '(')
                {
                    ss.pop();
                }
                else
                {
                    ss.push('1');
                    break;
                }
            }
            if (a[i] == ']')
            {
                if (ss.size() != 0 && ss.top() == '[')
                {
                    ss.pop();
                }
                else
                {
                    ss.push('1');
                    break;
                }
            }
        }
        // cout << ss.size();
        if (ss.size() == 0) cout << "yes";
        else cout << "no";
        cout << endl;
    } while (true);
}
