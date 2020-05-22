#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

const double PI = acos(-1.0L);

int main()
{
    double d, h, v, e;
    cin >> d >> h >> v >> e;

    v = v / (PI * (d/2)*(d/2));
    v -= e;

    if (v < 0) cout << "NO\n";
    else {
        cout << "YES\n";
        printf("%.12f\n", h / v);
    }
}
