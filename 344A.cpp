#include <iostream>

using namespace std;

int main()
{
    int n, c, p, g=1;
    cin >> n >> p;
    for (int i = 1; i < n; ++i) {
        cin >> c;
        if(c != p) g++;
        p = c;
    }
    cout << g;
}
