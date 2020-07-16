#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>

using namespace std;

typedef long long ll;

pair<int, int> nodes[105];
bool visited[105];
int n, cc;

void dfs(int s) {
    if (visited[s]) {
        return;
    }
    visited[s] = true;

    for (int i = 0; i < n; ++i) {
        if (i == s) {
            continue;
        }

        if (nodes[s].first == nodes[i].first || nodes[s].second == nodes[i].second) {
            dfs(i);
        }
    }
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> nodes[i].first >> nodes[i].second;
    }

    for (int i = 0; i < n; ++i) {
        if (!visited[i]) {
            cc++;
            dfs(i);
        }
    }

    cout << cc - 1 << '\n';
}
