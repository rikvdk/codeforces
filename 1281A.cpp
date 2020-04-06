#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i) {
        cin >> s;
        if (s.back() == 'o') cout << "FILIPINO\n";
        else if (s.back() == 'u') cout << "JAPANESE\n";
        else if (s.back() == 'a') cout << "KOREAN\n";
    }
}
