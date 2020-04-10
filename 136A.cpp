#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    int n, x;
    int vi[101];
    cin >> n;

    for (int i = 1; i <= n; ++i) {
        cin >> x;
        vi[x] = i;
    }

    for (int i = 1; i <= n; ++i) {
        cout << vi[i] << ' ';
    }
}
