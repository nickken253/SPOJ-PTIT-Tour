#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
#define fl float

fl cong(fl a, fl b, fl c, fl d){
    if(a == -1){
        a = b - (d - c);
        if(d - c == c - b) return a;
        else return -1;
    }
    if(b == -1){
        b = a + d - c;
        if(d - c == c - b) return b;
        else return -1;
    }
    if(c == -1){
        c = d - (b - a);
        if(d - c == c - b) return c;
        else return -1;
    }
    d = c + b - a;
    if(d - c == c - b) return d;
    else return -1;
}
fl nhan(fl a, fl b, fl c, fl d){
    if(a == -1){
        a = b / (d / c);
        if(d / c == c / b) return a;
        else return -1;
    }
    if(b == -1){
        b = a * (d / c);
        if(d / c == c / b) return b;
        else return -1;
    }
    if(c == -1){
        c = d / (b / a);
        if(d / c == c / b) return c;
        else return -1;
    }
    d = c * (b / a);
    if(d / c == c / b) return d;
    else return -1;
}

int main()
{
    faster;
    while(true){
        ll a, b, c, d;
        cin >> a >> b >> c >> d;
        if(a == -1 && b == -1 && c == -1 && d == -1) break;
        fl m = cong(a, b, c, d);
        fl n = nhan(a, b, c, d);
        if(m < 1 || m > 10000) m = -1;
        if(n < 1 || n > 10000) n = -1;
        if(m != -1) cout << (ll)m;
        else if( n == (ll)n) cout << (ll)n;
        else cout << "-1";
        cout << endl;
    }
}
