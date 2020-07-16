#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int n, p[1005];

int dfs(vector<bool> visited, int s) {
    if (visited[s]) return s;
    visited[s] = true;
    return dfs(visited, p[s]);
}

int main()
{

    cin >> n;
    for (int i = 1; i <= n; ++i) cin >> p[i];

    for (int i = 1; i <= n; ++i) {
        vector<bool> visited(n+1);
        cout << dfs(visited, i) << ' ';
    }
    cout << '\n';
}
