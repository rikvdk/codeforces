#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int t, i, j, r;
    cin >> t;
    while(t--) {
        cin >> s;
        r=0, i=0, j=s.size()-1;
        while(i < s.size() && s[i] == '0') ++i;
        while(j >= 0 && s[j] == '0') --j;
        for (; i < j; i++) r += s[i] == '0';
        cout << r << '\n';
    }
}
