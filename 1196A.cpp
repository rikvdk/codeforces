#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    long long q, a, b, c;
    cin >> q;
    for (int i = 0; i < q; ++i) {
        cin >> a >> b >> c;
        cout << (a+b+c)/2 << '\n';
    }
}
