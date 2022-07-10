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
    while (t--)
    {
        int n;
        string a;
        cin >> n;
        cin.ignore();
        cin >> a;
        int d1 = 0, d2 = 0, d3 = 0, d4 = 0, d5 = 0, d6 = 0, d7 = 0, d8 = 0;
        for (int i = 0; i < 38; i++)
        {
            string b = "";
            b = b + a[i] + a[i + 1] + a[i + 2];
            if (b == "TTT")
                d1++;
            if (b == "TTH")
                d2++;
            if (b == "THT")
                d3++;
            if (b == "THH")
                d4++;
            if (b == "HTT")
                d5++;
            if (b == "HTH")
                d6++;
            if (b == "HHT")
                d7++;
            if (b == "HHH")
                d8++;
        }
        cout << n << " " << d1 << " " << d2 << " " << d3 << " " << d4 << " " << d5 << " " << d6 << " " << d7 << " " << d8 << endl;
    }
}
// TTT, TTH, THT, THH, HTT, HTH, HHT và HHH.