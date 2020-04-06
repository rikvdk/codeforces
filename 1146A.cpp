#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    auto c = count(begin(s), end(s), 'a');
    if (c+c > s.size()) cout << s.size() << endl;
    else cout << 2 * c - 1 << endl;
}
