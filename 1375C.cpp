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
    int n, a, b;
    cin >> n >> a;
    for (int i = 1; i < n; ++i) cin >> b;
    cout << (a < b ? "YES\n" : "NO\n");
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
