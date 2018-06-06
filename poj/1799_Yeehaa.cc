#include <iostream>
#include <string>
#include <iomanip>
#include <math.h>
#define PI           3.14159265358979323846

using namespace std;

int main() {
	int t;
	cin >> t;
	int i = 0;
	while (i++ < t) {
		double r;
		int n;

		cin >> r >> n;

		double rad = (PI - (2 * PI / (double)n)) / 2;

		double cos_rad = cos (rad);

		double x = (1.0 + ( 1 / cos_rad));

		double result = r / x;


		cout << "Scenario #" << i << ":" << endl;
		cout << fixed << setprecision(3) << result << endl;
		cout << endl;

		
  }


   return 0;
}
