/**
 * Author: omteja04
 * Created on: 10-06-2024 03:58:22
 * Description: A_Soft_Drinking
 **/
 
#include <bits/stdc++.h>
#define boo cout << "Boo" << '
'
using namespace std;
typedef long long ll;
#define cinArr(n, arr)         \
    for (ll i = 0; i < n; i++) \
    cin >> arr[i]
#define coutArr(n, arr)        \
    for (ll i = 0; i < n; i++) \
    cout << arr[i] << ' '
 
void levi() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int totalDrink = (k * l) / nl;
    int lemonSliced = c * d;
    int salt = p / np;
    int ans = min(totalDrink, min(salt, lemonSliced));
    cout << ans / n;
}
 
int main() {
    levi();
    return 0;
}