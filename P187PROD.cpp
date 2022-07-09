#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define db double

int main()
{
    faster;
    string a;
    cin >> a;
    int dem = 0;
    int check[27] = {};
    for (int i = 0; i < a.size() - 2; i++)
    {
        int tanSo[27] = {};
        int cnt = 0;
        if(check[a[i] - 'A'] == 0){
            // cout << "start: " << a[i] << " ";
            check[a[i] - 'A'] = 1;
            int k;
            for(int j = i + 1; j < a.size(); j++){
                if(a[j] == a[i]){
                    k = j;
                    break;
                }
                else{
                    if(check[a[j]  - 'A'] == 0){
                        tanSo[a[j] - 'A']++;
                    }
                }
            }
            for(int j = i + 1; j < k; j++){
                if(tanSo[a[j] - 'A'] == 1){
                    cnt++;
                    // cout << a[j] << " ";
                }
                // else if(tanSo[a[j] - 'A'] == 2) check[a[j]  - 'A'] = 1;
            }
            // cout << endl << "cout: " << a[i] << " " << cnt << endl;
        }
        dem += cnt;
    }
    cout << dem;
}
