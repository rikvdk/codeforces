#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main()
{
    int n, x=0, y=0, a=3, r=0;
    string s;
    cin >> n >> s;

    for (auto c : s) {
        if (c == 'U') y++;
        else x++;

        if (a&1 && x > y) {
            a = 2;
            r++;
        } else if (a&2 && x < y) {
            a = 1;
            r++;
        }
    }

    cout << r-1;
}
