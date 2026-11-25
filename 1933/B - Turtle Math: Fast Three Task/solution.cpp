/**
 * Author: omteja04
 * Created on: 27-02-2024 20:21:18
 * Description: Divisible by 3
 **/
 
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define middle low + (high - low) / 2
#define PB push_back
#define F first
#define S second
#define boo cout << "Boo" << '
'
#define YES cout << "YES"
#define NO cout << "NO"
#define pi 3.14
const int MOD = 1000000007;
#define debug(x) cerr << (#x) << " = " << (x) << '
'
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
 
ll add(vector<int> &v) {
    ll sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
    }
    return sum;
}
void teja() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    ll sum = add(v);
    // cout<<sum<<endl;
    if (sum % 3 == 0) {
        cout << 0;
        return;
    }
    if (n == 1) {
        cout << 1;
        return;
    }
    int remainder = sum % 3;
    if (remainder == 2) {
        cout << 1;
        return;
    }
    for (int i = 0; i < n; i++) {
        int temp = sum;
        temp -= v[i];
        if (temp % 3 == 0) {
            cout << 1;
            return;
        }
    }
    cout << 2;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    tc {
        teja();
        cout << '
';
    }
    return 0;
}