#include <iostream>

using namespace std;

int main()
{
    int n, h, w, x;
    cin >> n >> h;
    w = n;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        w += x > h;
    }
    cout << w;
}
