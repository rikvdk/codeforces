#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, x=0;
    string s;
    cin >> n >> s;
    for (int i = 0; i < n; i+=++x) {
        cout << s[i];
    }
}
