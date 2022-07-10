#include<bits/stdc++.h>
using namespace std;
string xoa(string a){
	while(a[0] == '0'){
		a.erase(a.begin());
	}
	return a;
}
string cong(string a, string b){
	string c = "";
	int du = 0;
	char k;
	while(a.size() < b.size()) a = '0' + a;
	while(b.size() < a.size()) b = '0' + b;
	for(int i = a.size() - 1; i >= 0; i--){
		du = du + a[i] - '0' + b[i] - '0';
		k = du % 10 + '0';
		c = k + c;
		du /= 10;
	}
	if(du == 1){
		c = '1' + c;
	}
	return c;
}
string tru(string a, string b){
	string c = "";
	int du = 0, so, kt = 0;
	char k;
	while(a.size() < b.size()) a = '0' + a;
	while(b.size() < a.size()) b = '0' + b;
	if(a < b) swap(a,b), kt = 1;
	for(int i = a.size() - 1; i >= 0; i--){
		so = (a[i] - '0') - (b[i] - '0') - du;
		if(so < 0){
			so += 10;
			du = 1;
		}
		else{
			du = 0;
		}
		k = so + '0';
		c = k + c;
	}
	c = xoa(c);
	if(c.size() == 0){
		c = '0' + c;
	}
	if(kt == 1){
		c = '-' + c;
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
//		cout <<"du " << du << endl;
		k = du + '0';
		v[dem] = k + v[dem];
		int k = a.size() - 1 - i;
		while(k--){
			v[dem] = v[dem] + '0';
		}
//		cout << v[dem] << endl;
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
//string UCLN(string a, string b){
//	if(a[0] == '-'){
//		a.erase(a.begin());
//	}
//	if(b[0] == '-'){
//		b.erase(b.begin());
//	}
//	while(a.size() < b.size()) a = '0' + a;
//	while(b.size() < a.size()) b = '0' + b;
//	while(a != b){
//		if(a > b){
//			a = tru(a,b);
//			while(a.size() < b.size()) a = '0' + a;
//			while(b.size() < a.size()) b = '0' + b;
//		}
//		else{
//			b = tru(b,a);
//			while(a.size() < b.size()) a = '0' + a;
//			while(b.size() < a.size()) b = '0' + b;
//		}
//	}
//	a = xoa(a);
//	return a;
//}
int main(){
	string a;
	string b;
	string c;
//	cin.ignore();
	cin >> a;
	cin.ignore();
	cin >> b;
	cin.ignore();
	if(a[0] == '-' && b[0] != '-'){
		a.erase(a.begin());
		cout << tru(b,a) << endl;
		cout << '-' + cong(a,b) << endl;
		if(a == "0" || b == "0"){
			cout << "0";
		}
		else{
			cout << '-' + nhan(a,b) << endl;
		}
	}
	else{
		if(a[0] == '-' && b[0] == '-'){
			a.erase(a.begin());
			b.erase(b.begin());
			cout << '-' + cong(a,b) << endl;
			cout << tru(b,a) << endl;
			cout << nhan(a,b) << endl;
		}
		else{
			if(a[0] != '-' && b[0] == '-'){
				b.erase(b.begin());
				cout << tru(a,b) << endl;
				cout << cong(a,b) << endl;
				if(a == "0" || b == "0"){
					cout << "0";
				}
				else{
					cout << '-' + nhan(a,b) << endl;
				}
			}
			else{
				if(a[0] != '-' && b[0] != '-'){
					cout << cong(a, b) << endl;
					cout << tru(a, b) << endl;
					cout << nhan(a,b) << endl;
				}
			}
		}	
	}
//	cout << UCLN(a,b);
}
