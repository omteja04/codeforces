#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define db double
#define pb push_back
#define MOD 1000000007
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
#define pi 3.14
void takeinput()
{
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
 
ll sumofdigits(ll n){
    if (n < 10)
    {
        return n;
    }
    // Calculate the sum of digits
    ll digitSum = 0;
    while (n > 0)
    {
        digitSum += n % 10;
        n /= 10;
    }
    return digitSum;
}
void teja(){
    ll x;
    int k;
    cin>>x>>k;
    while(sumofdigits(x)%k!=0){
        x++;
    }
    cout << x <<  endl;
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