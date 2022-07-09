#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
struct cmp{
	bool operator() (int a,int b) {return a>b;}
};
int main()
{
    faster;
    int c, n, sum = 0;
    multiset<int, cmp> ss;
    cin >> c >> n;
    while (n--)
    {
        int d;
        cin >> d;
        ss.insert(d);
        
    }
    for(int i : ss){
        if(i > c) continue;
        if(sum + i >= c){
            break;
        }
        else{
            sum += i;
        }
    }
    cout << sum;
}
