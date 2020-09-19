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
    ll x, a=2, c=1, ans=0;
    cin >> x;

    while (x >= ((c * (c + 1)) / 2)) {
        ++ans;
        x -= (c * (c + 1)) / 2;

        c += a;
        a *= 2;
    }

    printf("%lld\n", ans);

}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
