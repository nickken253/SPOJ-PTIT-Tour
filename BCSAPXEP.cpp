#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    multiset<int> a;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        a.insert(n);
    }
    for(int i : a){
        cout << i << endl;
    }
}