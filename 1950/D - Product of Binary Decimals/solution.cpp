/**
 * Author: omteja04
 * Created on: 28-03-2024 21:39:29
 * Description: D_Product_of_Binary_Decimals
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
bool isBinaryDecimal(int num) {
    string number = to_string(num);
    for (char c : number) {
        if (c != '0' && c != '1') {
            return false;
        }
    }
    return true;
}
void teja() {
    int n;
    cin >> n;
    vector<int> binaryArray = {
        1, 10, 11, 100, 101, 110, 111, 1000, 1001, 1010,
        1011, 1100, 1101, 1110, 1111, 10000, 10001, 10010,
        10011, 10100, 10101, 10110, 10111, 11000, 11001,
        11010, 11011, 11100, 11101, 11110, 11111, 100000,
        100001, 100010, 100011, 100100, 100101, 100110,
        100111, 101000, 101001, 101010, 101011, 101100,
        101101, 101110, 101111, 110000, 110001, 110010,
        110011, 110100, 110101, 110110, 110111, 111000,
        111001, 111010, 111011, 111100, 111101, 111110,
        111111};
 
    for (auto i : binaryArray) {
        if (n % i == 0) {
            int temp = n;
            while (temp % i == 0 && i != 1)
                temp /= i;
            if (isBinaryDecimal(temp)) {
                YES;
                return;
            }
        }
    }
 
    NO;
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