#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct cmp
{
    bool operator()(char a, char b)
    {
        return a > b;
    }
};
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
        multiset<char, cmp> ss;
        for(int i = 0; i < n; i++){
            if(a[i] == '2' || a[i] == '3' || a[i] == '5' || a[i] == '7'){
                ss.insert(a[i]);
            }
            if(a[i] == '4'){
                ss.insert('3');
                ss.insert('2');
                ss.insert('2');
            }
            if(a[i] == '6'){
                ss.insert('5');
                ss.insert('3');
            }
            if(a[i] == '8'){
                ss.insert('7');
                ss.insert('2');
                ss.insert('2');
                ss.insert('2');
            }
            if(a[i] == '9'){
                ss.insert('7');
                ss.insert('3');
                ss.insert('3');
                ss.insert('2');
            }
        }
        for(auto i : ss) cout << i;
        cout << endl;
    }
}
