#include <iostream>
#include <cmath>
 
using namespace std;
int main() {
   int x,y,z;
   cin >> x >> y >> z;
 
   if ((x>y) && (y>z) || x + y == z) cout << "YES" << endl;
   else cout << "NO" << endl;
 
}