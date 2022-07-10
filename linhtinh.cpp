#include <iostream>
#include <math.h>
 
using namespace std;
 
int N;
 
string a[100009];
 
int main(){
    cin >> N;
    int n = 2;
    a[0] = "0";
    a[1] = "1";
    int k = 0;
    while (a[k].length() < N){
        a[n++] = a[k] + "0";
        a[n++] = a[k] + "1";
        k++;
    }
    for (int i = k; i < n; i++)
        cout << a[i] << endl;
}