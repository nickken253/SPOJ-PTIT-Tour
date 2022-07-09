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
    int n, k = 0;
    do
    {
        k++;
        cin >> n;
        int a[n + 1], check = 0;
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int cnt = 0;
        while (check == 0)
        {
            if (cnt >= 1000)
            {
                cout << "Case " << k << ": "<< "not attained" << endl;
                break;
            }
            int dem = 0;
            for (int i = 0; i < n - 1; i++)
            {
                if (a[i] == a[i + 1])
                    dem++;
            }
            if (dem == n - 1)
            {
                cout << "Case " << k << ": " << cnt << " iterations" << endl;
                break;
            }
            a[n] = a[0];
            for (int i = 0; i < n; i++)
            {
                a[i] = abs(a[i] - a[i + 1]);
            }
            cnt++;
        }
    } while (true);
}
