#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int n, m, r;
int visited[30005];

int dfs(int s, int p) {
    if (s == m) {
        return p;
    } else if(s < 0 || s >= 30005 || visited[s] && visited[s] < p) {
        return 30005;
    }

    visited[s] = p;

    return min(dfs(2 * s, p + 1), dfs(s - 1, p + 1));
}

int main()
{
    cin >> n >> m;
    cout << dfs(n, 0) << '\n';
}
