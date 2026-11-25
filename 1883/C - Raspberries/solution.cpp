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
ll prdt(vector<ll>&v){
    ll p = 1;
    for(auto &i : v){
        p *= i;
    }
    return p;
}
void teja(){
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    if (k != 4)
    {
        ll mini = k;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % k == 0)
                mini = 0;
            else
            {
                mini = min(mini, k - a[i] % k);
            }
        }
        cout << mini << endl;
    }
    else
    {
        ll mini = k, ans = 2;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 4 == 0)
                mini = 0;
            else
            {
                ll temp = k - a[i] % k;
                mini = min(mini, temp);
            }
        }
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                ans = max(ans - 1, 0ll);
        }
        cout << min(ans, mini) << endl;
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