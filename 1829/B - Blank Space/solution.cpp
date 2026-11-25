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
void teja(){
    int n;
    cin >> n;
    vector < int>v(n);
    int cnt = 0;
    int maxi = 0;
    for(int i=0; i<n; i++){
        cin >> v[i];
        if(v[i]==0){
            cnt++;
            maxi = max(maxi, cnt);
        }
        else{
            cnt = 0;
        }
    }
    cout<<maxi<<endl;
 
}
int main()
{
    takeinput();
    // Your code goes here
    int tc;
    cin>>tc;
    while(tc--){
        teja();
    }
 
    return 0;
}