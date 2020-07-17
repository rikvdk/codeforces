#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <unordered_set>
#include <vector>

using namespace std;

typedef long long ll;

vector<pair<int, int>> g[100005];
unordered_set<int> flour;
ll weights[100005];

int main()
{
    int n, m, k, u, v, w;
    cin >> n >> m >> k;

    for (int i = 0; i < m; ++i) {
        cin >> u >> v >> w;
        g[u].push_back({v, w});
        g[v].push_back({u, w});
    }

    for (int i = 0; i < k; ++i) {
        cin >> u;
        flour.insert(u);
    }

    int r = 1000000005;
    for (auto & i : flour) {
        for (auto & p : g[i]) {
            if (flour.find(p.first) == flour.end()) {
                r = min(r, p.second);
            }
        }
    }

    if (r == 1000000005) {
        cout << "-1\n";
    } else {
        cout << r << '\n';
    }
}
