#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define PB push_back
#define F first
#define S second
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define pi 3.14
const int MOD = 1000000007;
#define debug(x) cerr << (#x) << " = " << (x) << endl
#define RUN_TESTS(test_cases, test_function) \
    int tc; \
    cin >> tc; \
    while (tc--) { \
        test_function(); \
    }
 
void takeinput() {
#ifndef ONLINE_JUDGE
    freopen("E:/PROGRAMS/input.txt", "r", stdin);
    freopen("E:/PROGRAMS/output.txt", "w", stdout);
#endif
}
void teja(){
    int constraints;
    cin >> constraints;
    long long mini = 0;
    long long maxi = INT_MAX;
    vector<ll> res;
    int i = 0;
    while (i<constraints)
    {
        ll a, x;
        cin >> a>>x;
        switch (a)
        {
        case 1:
            mini = max(mini, x);
            break;
        case 2:
            maxi = min(maxi, x);
            break;
        default:
            res.push_back(x);
            break;
        }
        i++;
    }
    if(mini>maxi){
        cout << 0 << '
';
        return;
    }
    ll ans = maxi-mini+1;
    for (auto &i:res){
        if(i>=mini && i<=maxi){
            ans--;
        }
    }
    ans = max(ans, 0ll);
    cout<<ans<<'
';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);cout.tie(nullptr);
    // Your code goes here
    takeinput();
    RUN_TESTS(tc,teja);
    return 0;
}