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
    int k;
    int demM = 0, demW = 0;
    cin >> k;
    string a;
    cin >> a;
    while(true)
    {
        if(a.size() == 0){
            cout << demM + demW;
            break;
        }
        if (a[0] == 'W')
        {
            if (abs((demW + 1) - demM) > k)
            {
                if (a[1] == 'W')
                {
                    if (abs((demW + 1) - demM) > k)
                    {
                        // cout << "1_W>W>" << endl;
                        cout << demM + demW;
                        return 0;
                    }
                    else
                    {
                        // cout << "2_W>W<" << endl;
                        demW++;
                        a.erase(1,1);
                    }
                }
                else if (a[1] == 'M')
                {
                    if (abs((demM + 1) - demW) > k)
                    {
                        // cout << "3_W>M>" << endl;
                        cout << demM + demW;
                        return 0;
                    }
                    else
                    {
                        // cout << "4_W>M<" << endl;
                        demM++;
                        a.erase(1,1);
                    }
                }
            }
            else
            {
                // cout << "5_W<" << endl;
                demW++;
                a.erase(0,1);
            }
        }
        else if (a[0] == 'M')
        {
            if (abs((demM + 1) - demW) > k)
            {
                if (a[1] == 'W')
                {
                    if (abs((demW + 1) - demM) > k)
                    {
                        // cout << "6_M>W>" << endl;
                        cout << demM + demW;
                        return 0;
                    }
                    else
                    {
                        // cout << "7_M>W<" << endl;
                        demW++;
                        a.erase(1,1);
                    }
                }
                else if (a[1] == 'M')
                {
                    if (abs((demM + 1) - demW) > k)
                    {
                        // cout << "8_M>M>" << endl;
                        cout << demM + demW;
                        return 0;
                    }
                    else
                    {
                        // cout << "9_M>M<" << endl;
                        demM++;
                        a.erase(1,1);
                    }
                }
            }
            else
            {
                // cout << "10_M<" << endl;
                demM++;
                a.erase(0,1);
            }
        }
    }
}
