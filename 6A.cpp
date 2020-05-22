#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int a[4];
    for(int i = 0; i < 4; ++i) cin >> a[i];
    sort(a, a+4);

    if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3])
        cout << "TRIANGLE";
    else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3])
        cout << "SEGMENT";
    else
        cout << "IMPOSSIBLE";
}
