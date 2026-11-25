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
    // Your code goes here
    takeinput();
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n, k, x;
        cin >> n >> k >> x;
 
        //! n = the maximum element he can choose
        //? k = the number of elements he can choose
        //* x = the sum he has to reach
 
        ll minsum = k * (k + 1) / 2;
        ll maxsum = k * (2 * n - k + 1) / 2;
        if(minsum>x || maxsum<x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
 
    return 0;
}