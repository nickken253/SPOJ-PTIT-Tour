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
    while (t--)
    {
        string a;
        cin >> a;
        map<char, int> ss;
        set<char> day;
        int du = 0, sum = 0, k = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == '+')
            {
                if (a[i + 1] == '+')
                {
                    if (i > 0 && a[i - 1] >= 'a' && a[i - 1] <= 'z')
                    {
                        ss[a[i - 1]]++;
                    }
                    else if (a[i + 2] >= 'a' && a[i + 2] <= 'z')
                    {
                        du = 1;
                    }
                    i++;
                }
                else
                {
                    k = 1;
                }
            }
            else if (a[i] == '-')
            {
                if (a[i + 1] == '-')
                {
                    if (i > 0 && a[i - 1] >= 'a' && a[i - 1] <= 'z')
                    {
                        ss[a[i - 1]]--;
                    }
                    else if (a[i + 2] >= 'a' && a[i + 2] <= 'z')
                    {
                        du = -1;
                    }
                    i++;
                }
                else
                {
                    k = -1;
                }
            }
            if (a[i] >= 'a' && a[i] <= 'z')
            {
                day.insert(a[i]);
                ss[a[i]] = (a[i] - 'a' + 1) + du;
                sum += (k * ((a[i] - 'a') + 1 + du));
                du = 0;
            }
        }
        cout << "Expression: " << a << endl;
        cout << "value = " << sum << endl;
        for(auto i : day){
            cout << i << " = " << ss[i] << endl;
        }
    }
}