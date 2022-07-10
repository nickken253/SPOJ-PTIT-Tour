#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n, sum = 0;
        cin >> n;
        for(long long i = 1; i < sqrt(n); i ++){
            if(n % i == 0){
                sum += i + (n/i);
            }
        }
        if(ceil(sqrt(n)) * ceil(sqrt(n)) == n){
            sum += sqrt(n);
        }
        cout << sum << endl;
    }
}