#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

//TLE______________________
int main(){
    faster;
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string ss;
        int n;
        cin >> n;
        for(int i = 1; i <= n; i++){
            string a = to_string(i);
            ss += a;
        }
        int k = 1;
        while(ss.size() != 1){
            // cout << ss.size() << endl;
            for(int i = (k % 2); i < ss.size(); i += 2){
                ss.erase(i,1);
                i--;
            }
            k++;
            
        }
        cout << n << ":" << ss << endl;
    }
}
//123456789101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899100
//1 3 5 7 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0 1 2 3 4 5 6 7 8 9 0
//  3   7   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0   2   4   6   8   0
//  3       0       4       8       2       6       0       4       8       2       6       0       4       8       2       6       0       4       8       2       6       0       4       8
//          0               8               6               4               2               0               8               6               4               2               0               8  
//          0                               6                               2                               8                               4                               0
//                                          6                                                               8                                                               0
//                                          6                                                                                                                               0
//                                                                                                                                                                          0
//------------------------
//1234567891011121314151617          25
//1 3 5 7 9 0 1 2 3 4 5 6 7          13
//  3   7   0   2   4   6            6
//  3       0       4                3
//          0                        1
