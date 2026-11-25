/**
 * Author: omteja04
 * Created on: 11-03-2024 20:13:25
 * Description: A_Rudolf_and_the_Ticket
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
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> leftPocket(n);
    vector<int> rightPocket(m);
    for (int i = 0; i < n; i++) {
        cin >> leftPocket[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> rightPocket[i];
    }
 
    int pairsCount = 0;
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (leftPocket[i] + rightPocket[j] <= k) {
                pairsCount++;
            }
        }
    }
    cout << pairsCount;
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