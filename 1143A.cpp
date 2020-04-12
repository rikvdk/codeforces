#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    int n, l=0, r=0, t;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> t;
        if (t == 0) l = i;
        else r = i;
    }
    cout << 1+min(l, r);
}
