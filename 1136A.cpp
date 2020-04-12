#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, k, b[105];
    cin >> n;
    for (int i = 0; i < n; ++i) cin >> b[i] >> b[i];
    cin >> k;
    for (int i = 0; i < n; ++i) {
        if (k <= b[i]) {
            cout << n - i;
            break;
        }
    }
}
