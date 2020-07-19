#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

int n, m;
bool visited[50];
vector<int> adj[50];
vector<int> cc[50];

void dfs(int s, int a) {
    if (visited[s]) return;
    visited[s] = true;
    cc[a].push_back(s);

    for (auto u : adj[s]) {
        dfs(u, a);
    }
}

int main()
{
    int a, b;
    cin >> n >> m;
    for (int i = 1; i <= m; ++i) {
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }

    int c = 0;
    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            dfs(i, c++);
        }
    }

    for (int i = 1; i <= n; ++i) {
        if (!visited[i]) {
            cc[c++].push_back(i);
        }
    }

    sort(cc, cc + c, [](auto v, auto w) { return v.size() < w.size();});
    int cc1 = count_if(cc, cc + c, [](auto v) { return v.size() == 1; });
    int cc2 = count_if(cc, cc + c, [](auto v) { return v.size() == 2; });

    if (cc[c-1].size() > 3 || cc2 > cc1) {
        cout << "-1\n";
    } else {
        int i = c - 1;
        int j = 0;
        while(i >= j) {
            int x, y, z;
            if (cc[i].size() == 3) {
                x = cc[i][0];
                y = cc[i][1];
                z = cc[i][2];
                i--;
            } else if (cc[i].size() == 2) {
                x = cc[i][0];
                y = cc[i][1];
                z = cc[j][0];
                --i;
                ++j;
            } else {
                x = cc[i][0];
                y = cc[i-1][0];
                z = cc[i-2][0];
                i -= 3;
            }
            printf("%d %d %d\n", x, y, z);
        }
    }
}
