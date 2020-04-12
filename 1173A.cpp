#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int main()
{
   int x, z, y; 
   cin >> x >> y >> z;

   if (x == y) cout << (z?"?":"0");
   else if (x < y) cout << (z>=y-x?"?":"-");
   else if (x > y) cout << (z>=x-y?"?":"+");
}
