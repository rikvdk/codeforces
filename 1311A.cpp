#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
    int t, a, b;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        cin >> a >> b;
        if (a == b) cout << "0\n";
        else if (a < b) {
            cout << (1+((b-a)%2==0)) << '\n';
        } else {
            cout << (1+((a-b)%2!=0)) << '\n';
        }
    }
}
