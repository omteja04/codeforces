/**
 * Author: omteja04
 * Created on: 20-08-2024 20:34:02
 * Description: B_Generate_Permutation
 **/
 
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
 
#include <bits/stdc++.h>
 
using namespace std;
 
using ll = long long;
using ld = long double;
using p32 = pair<int, int>;
using p64 = pair<ll, ll>;
using pdd = pair<double, double>;
using v32 = vector<int>;
using v64 = vector<ll>;
using vb = vector<bool>;
using vv32 = vector<vector<int>>;
using vv64 = vector<vector<ll>>;
using vvb = vector<vector<bool>>;
using vp32 = vector<p32>;
using vp64 = vector<p64>;
using vvp64 = vector<vector<p64>>;
 
#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i <= b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define all(x) (x).begin(), (x).end()
#define middle low + (high - low) / 2
#define PB push_back
#define MP make_pair
#define FI first
#define SE second
#define boo cout << "Boo" << '
'
#define YES cout << "YES"
#define NO cout << "NO"
 
const int MOD = 1000000007;
const double PI = 3.14;
 
#define debug(x) cerr << (#x) << " = " << (x) << '
'
#define fast_cin()                    \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
 
#define tc    \
    int t;    \
    cin >> t; \
    while (t--)
 
void levi() {
    int n;
    cin >> n;
    if (n & 1) {
        forAB(i, 1, n / 2) cout << i << " ";
        for (int i = n; i > n / 2; i--)
            cout << i << " ";
    } else
        cout << -1;
}
 
int main() {
    fast_cin();
 
    tc {
        levi();
        cout << '
';
    }
    return 0;
}