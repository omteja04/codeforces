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
    while (tc--) {
        int n;
        cin >> n;
        vector<int> v(n);
        v[0] = 2;
        v[1] = 3;
        for (int i = 2; i < n;i++){
            v[i] = v[i - 1] + 1;
            while((3*v[i])%(v[i-1]+v[i-2])==0){
                v[i] += 1;
            }
        }
        for(auto &j:v){
            cout << j << " ";
        }
        cout << endl;
    }
    
 
    return 0;
}