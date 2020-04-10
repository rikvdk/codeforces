#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, n, m, a, total;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> n >> m;
        total = 0;
        for (int j = 0; j < n; ++j) {
            cin >> a;
            total += a;
        }
        cout << min(m, total) << '\n';
    }
}
