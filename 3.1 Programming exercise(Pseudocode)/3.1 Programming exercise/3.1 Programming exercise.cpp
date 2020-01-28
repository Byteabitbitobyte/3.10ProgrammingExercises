#include <iostream>
#define PI 3.1416
using namespace std;
int main()
{
	float radius, area, circum;
	cout << " Input the radius(1/2 of diameter) of a circle : ";
	cin >> radius;

	circum = 2 * PI * radius;
	area = PI * (radius * radius);
	cout << " The area of the circle is : " << area << endl;
	

	cout << endl;
	return 0;
}