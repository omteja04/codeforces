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
void Trap()
{
    ll n;
    cin>>n;
    vector<ll>coridor(300, 0);
    ll pos, activate;
    ll first = INT_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> pos >> activate;
        if(coridor[pos]==0)
            coridor[pos] = activate;
        else
            coridor[pos] = min(coridor[pos], activate);
        first=min(first, pos);
    }
    ll ans = ceil(coridor[first]/ 2.0) - 1 + first;
    for (ll j = first + 1; j <= ans;j++){
        if(coridor[j]!=0){
            ll res = ceil(coridor[j] / 2.0) - 1 + j;
            ans = min(ans, res);
        }
    }
    cout <<ans<< endl;
}
int main()
{
    takeinput();
    // Your code goes here
 
    ll tc;
    cin >> tc;
    while(tc--){
        Trap();
    }
 
    return 0;
}