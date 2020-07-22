#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

#define SUM(n) ((n)*((n)+1)/2)

using namespace std;

typedef long long ll;

int n, m, k;

bool visited[1005];
vector<int> adj[1005];
vector<int> c;
vector<int> cc[1005];

void dfs(int s, int i) {
    if (visited[s]) return;
    visited[s] = true;

    cc[i].push_back(s);
    for (auto u : adj[s]) {
        dfs(u, i);
    }
}


int main()
{
    int u, v, t;
    cin >> n >> m >> k;
    for (int i = 1; i <= k; ++i) cin >> t, c.push_back(t);
    for (int i = 0; i < m; ++i) {
        cin >> u >> v;
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }

    for (int i = 0; i < k; ++i) {
        dfs(c[i]-1, i);
    }

    int remainder_nodes = 0;
    int remainder_edges = 0;
    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            remainder_nodes++;
            remainder_edges += adj[i].size();
        }
    }
    remainder_edges /= 2;

    int result = 0;
    int max_from_remainder = 0;
    for (int i = 0; i < k; ++i) {
        int num_nodes = cc[i].size();
        int num_edges = 0;
        for (auto s : cc[i]) {
            num_edges += adj[s].size();
        }
        num_edges /= 2;

        int cc_at_max = SUM(num_nodes - 1);
        int cc_w_remainers = SUM(num_nodes + remainder_nodes - 1);

        result += cc_at_max - num_edges;
        max_from_remainder = max(max_from_remainder, cc_w_remainers - cc_at_max - remainder_edges);

    }

    cout << result + max_from_remainder << '\n';
}
