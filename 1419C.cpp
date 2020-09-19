#include <cstdio>
#include <iostream>

void solve() {
    bool b = true, c = false;
    int n, x, a, s=0;
    std::cin >> n >> x;

    for (int i = 0; i < n; ++i) {
        std::cin >> a;
        b = b && (a == x);
        c = c || (a == x);
        s += a - x;
    }

    if (b) {
        std::puts("0");
    } else if (c || s == 0) {
        std::puts("1");
    } else {
        std::puts("2");
    }
}

int main()
{
    int t;
    std::cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
