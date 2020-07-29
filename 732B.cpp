#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;

int main()
{
    int n, k, a[505], r=0;
    cin >> n >> k;
    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 1; i < n; ++i) {
        if (a[i] + a[i-1] < k) {
            r += k - a[i] - a[i-1];
            a[i] = k - a[i-1];
        }
    }

    cout << r << '\n';
    for (int i = 0; i < n; ++i) cout << a[i] << ' ';
    cout << '\n';
}
