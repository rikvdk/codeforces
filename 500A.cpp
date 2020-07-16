#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int n, t, a[30005];
bool visited[30005];

void dfs(int s) {
    if (visited[s] || s > n) return;
    visited[s] = true;
    dfs(s + a[s]);
}

int main()
{
    cin >> n >> t;
    for (int i = 0; i < n-1; ++i) cin >> a[i];

    dfs(0);
    if (visited[t-1]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
