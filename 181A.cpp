#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    char c;
    int n, m, x=0, y=0;
    cin >> n >> m;

    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> c;
            if (c == '.') continue;
            x ^= j;
            y ^= i;
        }
    }

    cout << y << ' ' << x << '\n';
}
