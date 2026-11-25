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
ll gcd(ll a, ll b) {
    if (b == 0) {
        return a;
    } else {
        return gcd(b, a % b);
    }
}
bool prime(ll n)
{
    for (ll i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
void solve(ll l,ll r){
    for (ll i = l; i <= r; i++)
    {
        if (!prime(i))
        {
            ll x = 1, y = i - x;
            while (x <= y)
            {
                if (gcd(x, y)!=1)
                {
                    cout << x << " " << y << endl;
                    return;
                }
                x += 1;
                y -= 1;
            }
        }
    }
    cout<<-1<<endl;
    return;
}
int main()
{
    takeinput();
    // Your code goes here
 
    ll tc;
    cin >> tc;
    while(tc--){
        ll l, r;
        cin >> l >> r;
        solve(l,r);
    }
        return 0;
}