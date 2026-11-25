/**
 * Author: omteja04
 * Created on: 09-01-2026 23:20:46
 * Problem: A_Transformation_from_A_to_B
 * Link: https://codeforces.com/contest/727/problem/A
 **/
 
#include <bits/stdc++.h>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;
#define int long long
 
void levi() {
    int a, b;
    cin >> a >> b;
    vector<int> path;
    function<bool(int a)> dfs = [&](int a) {
        if(a > b) {
            return false;
        }
        path.push_back(a);
        if(a == b) {
            return true;
        }
        if(dfs(a * 2)) {
            return true;
        }
        if(dfs(a * 10 + 1)) {
            return true;
        }
        path.pop_back();
        return false;
    };
    if(dfs(a)) {
        cout << "YES" << endl;
        cout << path.size() << endl;
        for(auto &it: path) {
            cout << it << " ";
        }
 
    } else {
        cout << "NO" << endl;
    }
}
#undef int
int main() {
    levi();
    return 0;
}