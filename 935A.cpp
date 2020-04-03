#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main() {
    int n, r=0;
    cin >> n;

    for (int i = 1; i < n; ++i) {
        r += n % i == 0;
    }

    cout << r;
}
