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
 
    ll n;
    cin>>n;
    if(n&1 or n<=4) {
        cout<<0<<endl;
        return;
    }
    if(n%4){
        cout<<n/4<<endl;
    }
    else{
        cout<<(n/4)-1<<endl;
    }
 
 
}
 
 
int main()
{
    takeinput();
    // Your code goes here
    teja();
    return 0;
}