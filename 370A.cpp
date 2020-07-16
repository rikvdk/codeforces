#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <numeric>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    // Rook
    if (x1 == x2 || y1 == y2) {
        cout << "1 ";
    } else {
        cout <<"2 ";
    }

    // Bishop
    if (dx == dy) {
        cout << "1 ";
    } else if (dx % 2 == dy % 2) {
        cout << "2 ";
    } else {
        cout << "0 ";
    }

    // King
    cout << min(dx, dy) + abs(dx - dy) << '\n';
}
