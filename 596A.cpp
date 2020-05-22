#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, x[4], y[4];
    cin >> n;
    for(int i = 0; i < n; ++i) cin >> x[i] >> y[i];
    sort(x, x+n);
    sort(y, y+n);
    if (x[0] != x[n-1] && y[0] != y[n-1])
        cout << (x[n-1] - x[0]) * (y[n-1] - y[0]);
    else
        cout << -1;
}
