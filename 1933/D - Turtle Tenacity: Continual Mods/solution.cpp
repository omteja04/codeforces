/**
 * Author: omteja04
 * Created on: 27-02-2024 21:05:26
 * Description: Mod
 **/
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
    // Your code goes here
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    map<int, int> freq;
    for (int num : v) {
        freq[num]++;
    }
 
    if (freq.begin()->second == 1) {
        YES;
        return;
    }
    vector<int> vec;
    for (auto &i : freq) {
        vec.push_back(i.first);
    }
    if (vec.size() == 1) {
        NO;
        return;
    }
    for (int i = 1; i < vec.size(); i++) {
        if (vec[i] % vec[0] != 0) {
            YES;
            return;
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