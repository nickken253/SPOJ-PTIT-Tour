#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

struct diemSo{
    int diem1[6] = {}, diem2[6] = {};
};

int main()
{
    faster;
    int n;
    cin >> n;
    diemSo dd[n];
    int a,b, maxx = INT_MIN, minn = INT_MAX;
    for(int i = 0; i < n; i++){
        cin >> a >> b;
        if(i == 0){
            dd[i].diem1[a] ++;
            dd[i].diem2[b] ++;
            maxx = 1;
            minn = min(a, b);
        }
        else{
            //ktra điểm số 1
            dd[i].diem1[a] ++;
            if(dd[i - 1].diem1[a] != 0){
                dd[i].diem1[a] += dd[i - 1].diem1[a];
            }
            else if(dd[i - 1].diem2[a] != 0){
                dd[i].diem1[a] += dd[i - 1].diem2[a];
            }
            //ktra điểm số 2;
            dd[i].diem2[b] ++;
            if(dd[i - 1].diem1[b] != 0){
                dd[i].diem2[b] += dd[i - 1].diem1[b];
            }
            else if(dd[i - 1].diem2[b] != 0){
                dd[i].diem2[b] += dd[i - 1].diem2[b];
            }
            // cập nhật giá trị
            if(dd[i].diem1[a] > maxx){
                maxx = dd[i].diem1[a];
                minn = a;
            }
            else if(dd[i].diem1[a] == maxx){
                if(minn > a){
                    minn = a;
                }
            }

            if(dd[i].diem2[b] > maxx){
                maxx = dd[i].diem2[b];
                minn = b;
            }
            else if(dd[i].diem2[b] == maxx){
                if(minn > b){
                    minn = b;
                }
            }
        }
    }
    cout << maxx << " " << minn;
}