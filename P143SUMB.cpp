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
    int n, m;
    cin >> n >> m;
    int a[m + 1], b[m + 1];
    for (int i = 1; i <= m; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    // TÌM_MIN;
    sort(a + 1, a + m + 1);
    cout << endl;
    int minn = 0;
    int dem = n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = 0;
        a[0] = INT_MAX;
        for (int j = 1; j <= m; j++)
        {
            if (a[j] > 0 && a[tmp] > a[j])
            {
                tmp = j;
                minn += a[tmp];
                // cout << a[tmp] << endl;
                dem--;
                if(dem == 0) break;
                a[tmp]--;
            }
        }
        if(dem == 0) break;
    }
    
    // TÌM_MAX;
    sort(b + 1, b + m + 1, greater<int>());
    int maxx = 0;
    dem = n;
    for (int i = 1; i <= n; i++)
    {
        int tmp = 0;
        b[0] = INT_MIN;
        for (int j = 1; j <= m; j++)
        {
            if (b[j] > 0 && b[tmp] < b[j])
            {
                tmp = j;
                maxx += b[tmp];
                // cout << b[tmp] << endl;
                dem--;
                if(dem == 0) break;
                b[tmp]--;
            }
        }
        if(dem == 0) break;
    }
    cout << maxx << " " << minn;
}
