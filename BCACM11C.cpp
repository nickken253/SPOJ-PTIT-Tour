#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long
// 7: 8
// 6: 0, 6
// 5: 2
// 4: 4
// 3: 7
// 2: 1

int main()
{
    faster;
    int t;
    cin >> t;
    while(t--){
        int n, cMin;
        string minn = "";
        cin >> n;
        if(n % 2 == 0){
            cMin = n / 2;
            while(cMin--){
                minn += '1';
            }
        }
        else{
            minn = "7";
            cMin = (n - 3) / 2;
            while(cMin--){
                minn += '1';
            }
        }
        // vector<int> diem;
        // int maxx[6] = {7,6,5,4,3,2}, k = 0;
        // map<int,int> chiSo;
        // chiSo[7] = 8, chiSo[6] = 0, chiSo[5] = 2, chiSo[4] = 4, chiSo[3] = 7, chiSo[2] = 1;
        // while(n != 0){
        //     if(n >= maxx[k]){
        //         if(n == maxx[k]){
        //             diem.push_back(chiSo[maxx[k]]);
        //             break;
        //         }
        //         if(n - maxx[k] > 1){
        //             n -= maxx[k];                  
        //             diem.push_back(chiSo[maxx[k]]);
        //         }
        //         else{
        //             k++;
        //         }
        //     }
        //     else{
        //         k++;
        //     }
        //     if(k == 6) break;
        // }
        // sort(diem.begin(), diem.end());
        // if(diem[0] == 0){
        //     if(diem.size() == 1) diem[0] = 6;
        //     else{
        //         int tmp = diem[1];
        //         diem[1] = diem[0];
        //         diem[0] = tmp;
        //     }
        // }
        // for(auto i : diem) cout << i;
        int Tam = n / 7;
        string a = "";
        switch (n % 7)
        {
            case 0: break;
            case 1: if(n == 1){}
                else a = "10", Tam--; break;
            case 2: a = "1"; break;
            case 3: if(n == 3) a = "7";
                else if(n == 10) a = "22", Tam--;
                else a = "200", Tam -= 2;
                break;
            case 4: if(n == 4) a = "4";
                else a = "20", Tam--; break;
            case 5: a = "2"; break;
            case 6: a = "6"; break;
            default: break;
        }
        if(n == 10 || n == 11 || n < 7 || n == 8){

        }
        else while(Tam--) a += '8';
        cout << a << " " << minn << endl;
    }
}
//___________________
// 2 1
// 3 7
// 4 4
// 5 2
// 6 6
// 7 8
// 8 10
// 9 18
// 10 22
// 11 20
// 12 28
// 13 68
// 14 88
// 15 108
// 16 188
// 17 200
// 18 208
// 19 288
// 20 688