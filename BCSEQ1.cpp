#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

// xét các ước của tổng dãy, nếu thỏa mãn thì in ra luôn :v
int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        int qq, n, maxx = INT_MIN;
        cin >> qq >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            maxx = max(maxx, a[i]);
        }
        int check = 0;
        for (int i = 1; i <= sum; i++)
        {
            if (sum % i == 0)
            {
                if (i < maxx)
                {
                    continue;
                }
                int tmpSum = 0;
                for (int j = 0; j < n; j++)
                {
                    tmpSum += a[j];
                    if (tmpSum == i)
                    {
                        tmpSum = 0;
                    }
                    else
                    {
                        if (tmpSum > i)
                        {
                            break;
                        }
                    }
                    if (j == n - 1 && tmpSum == 0)
                    {
                        cout << qq << " " << i << endl;
                        check = 1;
                        break;
                    }
                }
                if(check == 1){
                    break;
                }
            }
        }
    }
}
