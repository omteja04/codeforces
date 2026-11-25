/**
 * Author: omteja04
 * Created on: 01-03-2024 22:21:34
 * Description: A_Vlad_and_the_Best_of_Five
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
    string s;
    cin >> s;
    int cntA = 0;
    int cntB = 0;
    for (int i = 0; i < 5; i++) {
        if (s[i] == 'A')
            cntA++;
        else if (s[i] == 'B')
            cntB++;
    }
    if (cntA > cntB)
        cout << 'A';
    else
        cout << 'B';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
 
    tc {
        teja();
        cout << '
';
    }
    return 0;
}