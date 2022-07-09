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
    int demx = 0, demy = 0, sum = 0;
    cin >> a;
    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i] == '(' && a[i + 1] == '(')
        {
            demx++;
        }
        if (demx != 0 && (a[i] == '(' && a[i + 1] != '('))
        {
            for (int j = i + 1; j < a.size() - 1; j++)
            {
                if (a[j] == ')' && a[j + 1] == ')')
                {
                    demy++;
                }
            }
            sum += (demx * demy);
            demx = 0; demy = 0;
        }
    }
    cout << sum;
}
