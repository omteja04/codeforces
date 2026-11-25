#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pi 3.14
const int MOD = 1000000007;
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
void teja(){
    int x,y,k;
    cin >> x >> y >> k;
    if(x>y){
        cout << x << endl;
        return;
    }
    if(x+k>=y){
        cout << y << endl;
        return;
    }
 
    if(x+k<y){
        cout<<2*y-x-k<<endl;
    }
 
 
}
 
int main()
{
    takeinput();
    // Your code goes here
    ll tc;
    cin>>tc;
    while(tc--){
    teja();
    }
    return 0;
}