#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    if (n <= m && n <= k) cout << "YES";
    else cout << "NO";
}
