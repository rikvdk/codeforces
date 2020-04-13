#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <cstdio>

using namespace std;

typedef long long ll;

int main()
{
    int n, r[105], b, p=0, c=0;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> r[i];
    for (int i = 0; i < n; ++i) {
        cin >> b;
        p += !r[i] && b;
        c += r[i] && !b;
    }
    if (!c) cout << -1;
    else if (!p && c) cout << 1;
    else cout << (p/c+1);
}
