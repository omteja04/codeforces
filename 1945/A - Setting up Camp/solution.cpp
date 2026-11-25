/**
 * Author: omteja04
 * Created on: 19-03-2024 22:54:16
 * Description: A_Setting_up_Camp
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
    int introverts, extroverts, universal;
    cin >> introverts >> extroverts >> universal;
    if (introverts == 0 && extroverts == 0 && universal == 0) {
        cout << 0;
        return;
    }
    int roomCnt = 0;
 
    if (extroverts != 0 && extroverts % 3 != 0 && (extroverts % 3 + universal) < 3) {
        cout << -1;
        return;
    }
 
    roomCnt += introverts;
    roomCnt += (extroverts / 3);
 
    extroverts %= 3;
    if ((universal + extroverts) >= 3) {
 
        roomCnt += (universal + extroverts) / 3;
    }
    if ((universal + extroverts) % 3) {
        roomCnt++;
    }
 
    cout << roomCnt;
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