#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, a, s=0, m=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a;
        s += a;
        m = max(m, a);
    }
    cout << (n * m - s);
}
