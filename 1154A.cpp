#include <algorithm>
#include <iostream>

using namespace std;

typedef long long ll;

int main() {
    ll x[4];
    cin >> x[0] >> x[1] >> x[2] >> x[3];
    sort(x, x+4);
    cout << x[3] - x[0] << " ";
    cout << x[3] - x[1] << " ";
    cout << x[3] - x[2];
}
