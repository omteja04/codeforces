/**
 * Author: omteja04
 * Created on: 22-04-2024 17:56:14
 * Description: B_Progressive_Square
 **/
 
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
 
#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> p32;
typedef pair<ll, ll> p64;
typedef pair<double, double> pdd;
typedef vector<int> v32;
typedef vector<ll> v64;
typedef vector<vector<int>> vv32;
typedef vector<vector<ll>> vv64;
typedef vector<p32> vp32;
typedef vector<p64> vp64;
typedef vector<vector<p64>> vvp64;
 
#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i]
#define forN(i, n) for (ll i = 0; i < n; i++)
#define forAB(i, a, b) for (ll i = a; i <= b; i++)
#define rFN(i, n) for (ll i = n; i >= 0; i--)
#define rFAB(i, b, a) for (ll i = b; i >= a; i--)
#define middle low + (high - low) / 2
#define bb push_back
#define mp make_pair
#define fi first
#define se second
#define boo cout << "Boo" << '
'
#define YES cout << "YES"
#define NO cout << "NO"
 
const int MOD = 1000000007;
#define pi 3.14
 
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
    ll n, c, d;
    cin >> n >> c >> d;
    v64 vec(n * n);
    cinArr(n * n, vec);
    sort(vec.begin(), vec.end());
    v64 myVec(n * n);
    myVec[0] = vec[0];
    for (int i = 1; i < n; i++) {
        myVec[i] = myVec[i - 1] + c;
    }
    for (int i = 1; i < n; i++) {
        forN(j, n) {
            myVec[i * n + j] = myVec[(i - 1) * n + j] + d;
        }
    }
    sort(myVec.begin(), myVec.end());
    cout << (vec == myVec ? "YES" : "NO");
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