/**
 * Author: omteja04
 * Created on: 28-03-2024 20:55:11
 * Description: B_Upscaling
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
    vector<string> vec(2 * n);
    bool outerHash = true;
    for (int i = 0; i < 2 * n; i += 2) {
        string temp = "";
        bool innerHash = outerHash;
        for (int j = 0; j < n; j++) {
            if (innerHash) {
                temp += "##";
            } else {
                temp += "..";
            }
            innerHash = !innerHash;
        }
        vec[i] = temp;
        vec[i + 1] = temp;
        outerHash = !outerHash;
    }
    for (int i = 0; i < 2 * n; i++) {
        cout << vec[i] << '
';
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    tc {
        teja();
        // cout << '
';
    }
    return 0;
}