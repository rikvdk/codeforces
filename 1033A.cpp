#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

bool visited[1005][1005];
int n, ax, ay, bx, by, cx, cy;

void dfs(int x, int y) {
    if (x < 1 || y < 1 || x > n || y > n) return;
    if (visited[x][y]) return;
    if (x == ax || y == ay) return;
    if (abs(x - ax) == abs(y - ay)) return;

    visited[x][y] = true;

    dfs(x-1, y);
    dfs(x-1, y-1);
    dfs(x, y-1);
    dfs(x+1, y-1);
    dfs(x+1, y);
    dfs(x+1, y+1);
    dfs(x, y+1);
    dfs(x-1, y+1);
}

int main()
{
    cin >> n >> ax >> ay >> bx >> by >> cx >> cy;

    dfs(bx, by);

    if (visited[cx][cy]) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}
