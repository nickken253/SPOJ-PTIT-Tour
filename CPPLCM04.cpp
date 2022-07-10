#include<bits/stdc++.h>
using namespace std;
#define faster ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll  long long

ll rutGon(ll a, string b)
{
    ll c = 0;
    for(int i = 0; i < b.size(); i++)
    {
        c = (c * 10 + (b[i] - '0')) % a;
    }
    return c;
}
ll UCLN(ll a, ll b)
{
    while(a * b != 0)
    {
        if(a > b){
            a %= b;
        }
        else
        {
            b %= a;
        }
    }
    return a + b;
}
ll UCLNmax(ll a, string b)
{
    ll c = rutGon(a, b);
    return UCLN(a, c); 
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t --){
        ll a;
        string b;
        cin >> a;
        cin.ignore();
        cin >> b;
        cout << UCLNmax(a, b) << endl;
    }
}