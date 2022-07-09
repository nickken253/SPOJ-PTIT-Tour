#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define endl "\n"
#define ull unsigned long long
#define ll long long

int main()
{
    faster;
    int t;
    cin >> t;
    while (t--)
    {
        string a;
        cin >> a;
        stack<int> ss;
        int k = 1;
        for (int i = 0; i < a.size(); i++)
        {
            if (a[i] == 'D')
            {
                if (i == 0 || a[i - 1] == 'I')
                {
                    ss.push(k), k++;
                }
                ss.push(k), k++;
            }
            else
            {
                while (ss.size() != 0)
                {
                    cout << ss.top();
                    ss.pop();
                }
                if (i == 0) cout << k, k++;
                if(a[i + 1] != 'D') cout << k, k++;
            }
            
        }
        while (ss.size() != 0)
        {
            cout << ss.top();
            ss.pop();
        }
        cout << endl;
    }
}
// #include <iostream>
// #include <stack>
// using namespace std;

// void solution()
// {
//     string s;
//     stack<int> mystack;
//     cin >> s;
//     int i, j = 0;
//     for (i = 0; i < s.length(); i++)
//     {
//         if (s[i] == 'D')
//         {
//             if (i == 0 || s[i - 1] == 'I')
//                 mystack.push(++j);
//             mystack.push(++j);
//         }
//         else
//         {
//             while (!mystack.empty())
//             {
//                 cout << mystack.top();
//                 mystack.pop();
//             }
//             if (i == 0)
//                 cout << ++j;
//             if (s[i + 1] != 'D')
//                 cout << ++j;
//         }
//     }
//     while (!mystack.empty())
//     {
//         cout << mystack.top();
//         mystack.pop();
//     }
//     cout << endl;
// }

// int main()
// {
//     int T;
//     cin >> T;
//     while (T--)
//     {
//         solution();
//     }
//     return 0;
// }