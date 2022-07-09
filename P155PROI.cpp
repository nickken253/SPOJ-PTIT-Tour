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
        int n;
        cin >> n;
        int d[1005] = {}, a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i] >> b[i];
            d[b[i]]++;
        }
        int dem = 0;
        for(int i = 0; i < n; i++){
            if(d[a[i]] == 0){
                dem ++;
                // cout << a[i] << endl;
            }
            if(a[i] == b[i] && d[a[i]] == 1){
                dem ++;
                // cout << a[i] << " " << i << endl;
            }
        }
        cout << dem;
    }
