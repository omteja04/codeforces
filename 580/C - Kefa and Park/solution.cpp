/**
 * Author: omteja04
 * Created on: 09-01-2026 23:06:08
 * Problem: C_Kefa_and_Park
 * Link: https://codeforces.com/problemset/problem/580/C
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
void levi() {
    int n, m;
    cin >> n >> m;
    vector<int> cats(n + 1, 0);
    for(int i = 1; i <= n; i++) {
        cin >> cats[i];
    }
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<bool> visited(n + 1, false);
    int result = 0;
    function<void(int, int)> dfs = [&](int node, int consecutiveCats) {
        visited[node] = true;
        if(cats[node] == 1) {
            consecutiveCats++;
        } else {
            consecutiveCats = 0;
        }
        if(consecutiveCats > m) {
            return;
        }
        bool isLeaf = true;
        for(int neighbor: adj[node]) {
            if(!visited[neighbor]) {
                isLeaf = false;
                dfs(neighbor, consecutiveCats);
            }
        }
        if(isLeaf && node != 1) {
            result++;
        }
    };
    dfs(1, 0);
    cout << result << endl;
}
 
int main() {
    levi();
    return 0;
}