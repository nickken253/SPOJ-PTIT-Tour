#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//NOT_DONE____________________________
int main()
{
    faster;
    string a, b;
    do
    {
        cin >> a;
        if (a == "#")
            break;
        cin >> b;
        a = a + '0';
        b = b + '0';
        int n = a.size() - 1, check = 0;
        int tmpa = 0, tmpb = 0, cs[n] = {}, dem = 0, sum = 1;
        for (int i = 0; i < a.size() - 1; i++)
        {
            if (a[i] != '?')
            {
                tmpa = tmpa * 10 + (a[i] - '0');
                tmpb = tmpb * 10 + (b[i] - '0');
            }
            else
            {
                if (tmpa > tmpb)
                {
                    // cout << "check > ";
                    cs[i] = 10;
                    // cout << cs[i] << " ";
                    a[i] = '9';
                    tmpa = tmpa * 10 + (a[i] - '0');
                    tmpb = tmpb * 10 + (b[i] - '0');
                }
                else if (tmpa == tmpb)
                {
                    // cout << "check = ";
                    // cs[i] = 9 - (b[i] - '0');
                    a[i] = b[i];
                    if(a[i + 1] != '?' && a[i + 1] >= b[i + 1])
                    {
                        a[i] = b[i] + 1;
                        if(b[i] == '9') a[i] = '9';
                    }
                    else if(a[i + 1] == '?')
                    {
                        a[i] = b[i] + 1;
                        if(b[i] == '9') a[i] = '9';
                        dem += 9 - (b[i + 1] - '0');
                        // cout << "check dem";
                    }
                    cs[i] = 9 - (a[i] - '0') + 1;
                    if(b[i] == '9') cs[i] = 0;
                    // cout << cs[i] << " ";
                    tmpa = tmpa * 10 + (a[i] - '0');
                    tmpb = tmpb * 10 + (b[i] - '0');
                }
            }
            cout << a[i] << " ";
        }
        cout << endl;
        for(int i = 0; i < n; i ++){
            cout << cs[i] << " ";
            if(cs[i] != 0) sum *= cs[i], check = 1;
        }
        cout << endl;
        if(check == 0) sum = 0;
        cout << dem + sum << endl << endl;
    }
    while(true);
}
