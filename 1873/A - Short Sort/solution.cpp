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
    int n;
    cin >> n;
    while(n--){
        string s;
        cin >> s;
        if(s=="abc" or s=="bac" or s=="acb" or s=="cba")
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
 
    return 0;
}