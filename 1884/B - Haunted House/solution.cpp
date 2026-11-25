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
 
void teja(){
 
    ll n;
    string binarystr;
    cin >> n;
    cin >> binarystr;
 
    vector<ll> ans;
    reverse(binarystr.begin(), binarystr.end());
    
    ll zerocnt = 0;
    for (ll i = 0;i<n;i++){
        if(binarystr[i] == '0')
        {
            zerocnt++;
            ans.pb(i + 1);
        }
    }
    ll prev = 0;
    ll cnt = 1;
        for (ll i = 0; i < zerocnt;i++){
                cout << ans[i] - cnt + prev << " ";
                prev += ans[i] - cnt;
                cnt++;
                // zerocnt--;
        }
        for (ll i = zerocnt; i < n; i++)
        {
                cout << -1<<' ';
        }
        cout << endl;
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