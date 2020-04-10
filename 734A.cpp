#include <iostream>

using namespace std;

int main()
{
    int n, a=0, d=0;
    char c;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> c;
        if (c == 'A') ++a;
        else ++d;
    }

    if(a > d) cout << "Anton\n";
    else if(d > a) cout << "Danik\n";
    else cout << "Friendship\n";
}
