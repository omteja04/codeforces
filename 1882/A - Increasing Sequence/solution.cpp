#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
int main()
{
    takeinput();
    // Your code goes here
    int tc;
    cin >> tc;
    while(tc--){
        int n;
        cin >> n;
        vector<ll> v(n);
        vector<ll> res(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        if(v[0]==1)
            res[0] = 2;
        else
            res[0] = 1;
        for (int i = 1; i < n;i++){
            res[i] = res[i - 1] + 1;
            if(res[i]==v[i])
                res[i] += 1;
            else{
                continue;
            }
        }
        cout << res[n - 1] << endl;
    }
 
    return 0;
}