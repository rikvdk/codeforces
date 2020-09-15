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
    int n, a, ones = 0;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a, ones += a;

    int nn = n / 2;
    if (ones <= nn) {
        printf("%d\n", nn);
        for (int i = 0; i < nn; ++i) {
            fputs("0 ", stdout);
        }
        puts("");
    } else {
        printf("%d\n", nn + (nn & 1));
        for (int i = 0; i < nn + (nn & 1); ++i) {
            fputs("1 ", stdout);
        }
        puts("");
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
