#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, k;
    double x1, y1, x2, y2, l=0;
    cin >> n >> k >> x1 >> y1;
    for(int i = 1; i < n; ++i) {
        cin >> x2 >> y2;
        l += sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
        x1 = x2;
        y1 = y2;
    }

    printf("%.20f\n", l* k / 50);
}
