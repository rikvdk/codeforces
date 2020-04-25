#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);

    if (a[0] + a[1] <= a[2]) {
        cout << (a[2] - a[1] - a[0] + 1) << '\n';
    } else {
        cout << "0\n";
    }

}
