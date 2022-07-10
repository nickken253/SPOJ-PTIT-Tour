#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
string cong(string a, string b){
    int du = 0;
    string c = "";
    while(a.size() < b.size()) a = '0' + a;
    while(a.size() > b.size()) b = '0' + b;
    for(int i = a.size() - 1; i >= 0; i--){
        du = (a[i] - '0') + (b[i] - '0') + du;
        char k = (du % 10) + '0';
        du /= 10;
        c = k + c;
    }
    if(du != 0){
        c = '1' + c;
    }
    return c;
}
string nhan(string a, string b){
	if(a == "0" || b == "0"){
		string c = "0";
		return c;
	}
	int du = 0;
	char k;
	while(a.size() < b.size()) a = '0' + a;
	while(b.size() < a.size()) b = '0' + b;
	string v[a.size() + b.size()];
	int dem = 0;
	for(int i = b.size() - 1; i >= 0; i--){
		
		v[dem] = "";
		for(int j = a.size() - 1; j >= 0; j --){
			int so = (a[j] - '0') * (b[i] - '0') + du;
			k = so % 10 + '0';			
			du = so / 10;	
			v[dem] = k + v[dem];
		}
		k = du + '0';
		v[dem] = k + v[dem];
		int k = a.size() - 1 - i;
		while(k--){
			v[dem] = v[dem] + '0';
		}
		dem++;
		du = 0;
	}
	string c = "";
	dem--;
	while(dem >= 0){
		c = cong(c, v[dem]);
		dem --;
	}
	while(c[0] == '0'){
		c.erase(c.begin());
	}
	return c;
}
int main(){
    faster;
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        string sum = "1";
        for(int i = 1; i <= a; i ++){
            sum = nhan(sum,to_string(i));
        }
        cout << sum << endl;
    }
}

