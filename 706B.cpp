#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int a, b, n;
    double x, y, v, r=1000000.0;
    cin >> a >> b >> n;
    for(int i = 0; i < n; ++i) {
        cin >> x >> y >> v;
        r = min(r, sqrt((x-a)*(x-a) + (y-b)*(y-b))/v);
    }

    printf("%.20f\n", r);
}
