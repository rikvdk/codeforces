#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

const double PI = acos(-1.0L);

int main()
{
    double a=0;
    int n;
    cin >> n;
    int r[n];
    for(int i = 0; i < n; ++i) cin >> r[i];
    sort(r, r+n, std::greater<int>());

    for(int i = 0; i < n; ++i) {
        if (i % 2 == 0) {
            a += PI * r[i] * r[i];
        } else {
            a -= PI * r[i] * r[i];
        }
    }
    printf("%.20f\n", a);
}
