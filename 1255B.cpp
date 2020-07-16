#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

typedef long long ll;

int a[1005];

void solve() {
    int n, m, s=0;
    cin >> n >> m;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s += a[i];
    }

    if (n > m || n == 2) {
        cout << -1 << '\n';
        return;
    }
    cout << 2 * s << '\n';

    for (int i = 1; i < n; ++i) {
        printf("%d %d\n", i, i+1);
    }
    printf("%d %d\n", 1, n);
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
