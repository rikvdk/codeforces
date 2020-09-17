#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

typedef long long ll;

int main() {
    int n;
    string s;
    cin >> n;
    cin >> s;
    for(auto i = count(begin(s), end(s), 'n'); i; --i) cout << "1 ";
    for(auto i = count(begin(s), end(s), 'z'); i; --i) cout << "0 ";
}
