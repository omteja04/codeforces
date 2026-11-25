#include <bits/stdc++.h>
using namespace std;
 
const int INF = 1e9;
 
// Standard BFS to find shortest path distances
vector<int> bfs(int src, int n, const vector<vector<int>>& adj) {
    vector<int> dist(n + 1, INF);
    dist[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty()) {
        int u = q.front(); q.pop();
        for (int v : adj[u]) {
            if (dist[v] == INF) {
                dist[v] = dist[u] + 1;
                q.push(v);
            }
        }
    }
    return dist;
}
void levi() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> special(k);
    for (int i = 0; i < k; i++) cin >> special[i];
    
    vector<vector<int>> adj(n + 1);
    for (int i = 0; i < m; i++) {
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
 
    vector<int> d1 = bfs(1, n, adj);
    vector<int> dn = bfs(n, n, adj);
    sort(special.begin(), special.end(), [&](int a, int b) {
        return d1[a] - dn[a] < d1[b] - dn[b];
    });
    
    int bestShortcut = 0;
    int prevMax = -INF;
    for(auto &p : special) {
        if(prevMax != -INF) 
            bestShortcut = max(bestShortcut, prevMax + 1 + dn[p]);
        prevMax = max(prevMax, d1[p]);
    }
    cout << min(bestShortcut, d1[n]);
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    levi();
    
    
 
    return 0;
}