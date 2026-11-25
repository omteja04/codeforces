/**
 * Author: omteja04
 * Created on: 11-03-2024 20:25:27
 * Description: C_Rudolf_and_the_Ugly_String
 **/
 
#pragma G++ optimize("Ofast")
#pragma G++ target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma G++ optimize("unroll-loops")
 
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
 
void teja() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    string map = "map";
    string pie = "pie";
    int minRemovals = 0;
    for (int i = 0; i < n - 2; ++i) {
        string substr = str.substr(i, 3);
        if (substr == map || substr == pie) {
            minRemovals++;
            i += 2; // Skip the next two characters to avoid overlapping substrings
        }
    }
 
    cout << minRemovals;
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