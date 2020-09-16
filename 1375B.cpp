#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <utility>
#include <vector>

using namespace std;

typedef long long ll;

void solve() {
    ll n, m, a;
    cin >> n >> m;
    bool possible = true;

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a;
            int nn = (i>0) + (i<n-1) + (j>0) + (j<m-1);
            possible &= nn >= a;
        }
    }

    cout << (possible ? "YES" : "NO") << endl;
    if (possible) {
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                int nn = (i>0) + (i<n-1) + (j>0) + (j<m-1);
                printf("%d ", nn);
            }
            puts("");
        }
    }
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
