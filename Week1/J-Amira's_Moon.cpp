#include <iostream>
#include <iomanip>
 
using namespace std;
int main() {
   double r;
   cin >> r;
 
   const double pi = 3.14159;
   double area = pi * r * r;
   cout << fixed << setprecision(4)<< "A=" << area << endl;
   return 0;
}