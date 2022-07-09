#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

void swap(char &a, char &b){
    char tmp = a;
    a = b;
    b = tmp;
}

void sapxep(string a, int n, int pos){
    for(int i = pos; i < n; i++){
        for(int j = i + 1; j <= n; j++){
            if(a[i] < a[j]){
                swap(a[i], a[j]);
            }
        }
    }
}
int main()
{
    faster;
    int t, dem = 1;
    cin >> t;
    cin.ignore();
    while(t--){
        int check = 0;
        string b;
        cin >> b;
        int i;
        for(i = b.size() - 1; i >= 0; i--){
            if(i == 0){
                cout << "BIGGEST\n";
                check = 1;
                break;
            }
            if(b[i] > b[i - 1]){
                break;
            }
        }
        if(check == 0){
            for(int j = b.size() - 1; j >= 0; j--){
                if(b[j] > b[i - 1]){
                    swap(b[i - 1], b[j]);
                    for(int k = i; k < b.size() - 1; k++){
                        for(int h = k + 1; h < b.size(); h++){
                            if(b[k] > b[h]){
                                swap(b[k], b[h]);
                            }
                        }
                    }
                    break;
                }
            }
            cout<< b << endl;
        }
    }
}
