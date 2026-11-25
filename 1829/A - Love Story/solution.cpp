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
    string s;
    cin >> s;
    int cnt = 0;
    string a = "codeforces";
    for(int i=0; i<s.size(); i++){
        if(s[i]!=a[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
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