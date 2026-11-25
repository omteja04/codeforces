#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
#define MOD 1000000007
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
void teja(){
    ll n;
    cin >> n;
    ll x, y, z;
    if(n<=6 or n==9){
        cout << "NO" << endl;
        return;
    }
    if(n%3!=0){
        x = 1;
        y = 2;
        z = n - 3;
    }
    else{
        x = 1;
        y = 4;
        z = n - 5;
    }
    cout<<"YES" << endl;
    cout << x << " " << y << " " << z << endl;
    
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