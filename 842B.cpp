#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int r, d, n, x, y, ri, ans=0;
    cin >> r >> d >> n;
    for(int i = 0; i < n; ++i) {
        cin >> x >> y >> ri;
        auto dist = sqrt(x*x+y*y);
        if (dist - ri >= r-d && dist + ri <= r)
            ans++;
    }

    cout << ans << '\n';
}
