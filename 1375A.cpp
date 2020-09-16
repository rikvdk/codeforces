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
    int n, a, b, c;
    cin >> n >> a;

    printf("%d ", a);
    for (int i = 1; i < n; i += 2, a = c) {
        cin >> b >> c;

        int t3 = -b - a;
        int t4 = c - -b;

        int t5 = b - a;
        int t6 = -c - b;

        int t7 = -b - a;
        int t8 = -c - -b;

        if ((t3 <= 0 && t4 >= 0) || (t3 >= 0 && t4 <= 0)) {
            b *= -1;
        } else if ((t5 <= 0 && t6 >= 0) || (t5 >= 0 && t6 <= 0)) {
            c *= -1;
        } else if ((t7 <= 0 && t8 >= 0) || (t7 >= 0 && t8 <= 0)) {
            b *= -1;
            c *= -1;
        }

        printf("%d %d ", b, c);
    }
    puts("");
}

int main()
{
    int t;
    cin >> t;
    for(int i = 0; i < t; ++i) {
        solve();
    }
}
