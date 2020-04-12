#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a[105], r=0;
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> a[i];
    sort(a, a+n);
    for (int i = 0; i < n; i+=2) r += a[i+1] - a[i];
    cout << r;
}
