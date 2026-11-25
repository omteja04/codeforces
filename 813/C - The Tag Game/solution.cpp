/**
 * Author: omteja04
 * Created on: 11-01-2026 22:15:57
 * Problem: C_The_Tag_Game
 * Link: https://codeforces.com/contest/813/problem/C
 **/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
using ll = long long;
 
void levi() {
    int n, x;
    cin >> n >> x;
    vector<vector<int>> adj(n + 1);
    for(int i = 0; i < n - 1; i++) {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> dist(n + 1, -1);
    queue<int> q;
    q.push(1);
    dist[1] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto child: adj[node]) {
            if(dist[child] == -1) {
                dist[child] = dist[node] + 1;
                q.push(child);
            }
        }
    }
 
    vector<int> distX(n + 1, -1);
    q.push(x);
    distX[x] = 0;
    while(!q.empty()) {
        int node = q.front();
        q.pop();
        for(auto child: adj[node]) {
            if(distX[child] == -1) {
                distX[child] = distX[node] + 1;
                q.push(child);
            }
        }
    }
    int best = 0;
    for(int i = 1; i <= n; i++) {
        if(dist[i] > distX[i]) {
            best = max(best, dist[i]);
        }
    }
    cout << 2 * best << "
";
}
 
int main() {
    levi();
    return 0;
}