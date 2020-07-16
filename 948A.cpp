#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

char p[505][505];

int main()
{
    int R, C;
    char c;
    cin >> R >> C;

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            cin >> c;
            p[i][j] = c;
        }
    }

    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (p[i][j] != 'W') continue;

            if ((i > 0 && p[i-1][j] == 'S') || 
                    (p[i+1][j] == 'S') ||
                    (j > 0 && p[i][j-1] == 'S') ||
                    (p[i][j+1] == 'S')) {
                cout << "No\n";
                return 0;
            }

        }
    }

    cout << "Yes\n";
    for (int i = 0; i < R; ++i) {
        for (int j = 0; j < C; ++j) {
            if (p[i][j] == '.') {
                cout << 'D';
            } else {
                cout << p[i][j];
            }
        }
        cout << '\n';
    }
}
