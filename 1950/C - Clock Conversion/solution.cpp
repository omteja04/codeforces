/**
 * Author: omteja04
 * Created on: 28-03-2024 21:18:57
 * Description: C_Clock_Conversion
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
    string twelveHr = "";
    int hour = stoi(s.substr(0, 2));
    int minute = stoi(s.substr(3, 2));
    if (hour < 12 && hour != 0) {
        twelveHr = s;
        twelveHr += " AM";
    } else if (hour == 0 || hour == 12) {
        if (hour == 0) {
            twelveHr = "12:";
            twelveHr += s.substr(3, 2);
            twelveHr += " AM";
        } else {
            twelveHr = "12:";
            twelveHr += s.substr(3, 2);
            twelveHr += " PM";
        }
    } else {
        hour = hour - 12;
        if(hour<10){
            twelveHr += "0";
        }
        twelveHr += to_string(hour);
        twelveHr += ":";
        twelveHr += s.substr(3, 2);
        twelveHr += " PM";
    }
    cout << twelveHr;
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