#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int n, t=0;
    cin >> n;
    if (n % 2) {
        n -= 3;
        t=1;
    }
    cout << (t+n/2) << '\n';
    for (int i = 0; i < n/2; ++i) {
        cout << 2 << ' ';
    }
    if (t) cout << 3;
}
