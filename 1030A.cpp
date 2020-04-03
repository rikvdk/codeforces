#include <bits/stdc++.h>

typedef long long ll;

using namespace std;

int main() {
    int n;
    char c;

    cin >> n;

    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c == '1') {
            cout << "HARD";
            return 0;
        }
    }

    cout << "EASY";
}
