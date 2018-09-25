#include <iostream>
#include "vector.h"

using namespace std;

int main()
{
	n_vec v1, v2;
	n_vec v3;

	cout << "--- Vector 1 ---" << endl;
	cout << "Coordinate X:" << endl;
	cin >> v1.x;
	cout << "Coordiante Y:" << endl;
	cin >> v1.y;
	cout << "Coordinate Z:" << endl;
	cin >> v1.z;

	cout << endl << "--- Vector 2 ---" << endl;
	cout << "Coordinate X:" << endl;
	cin >> v2.x;
	cout << "Coordiante Y:" << endl;
	cin >> v2.y;
	cout << "Coordinate Z:" << endl;
	cin >> v2.z;

	cout << endl << "**** Vector 1 + Vector 2 ****" << endl;
	v3 = v1 + v2;
	cout << v3.x << ", "<< v3.y << ", " << v3.z << endl << endl;

	cout << endl << "**** Vector 1 - Vector 2 ****" << endl;
	v3 = v1 - v2;
	cout << v3.x << ", " << v3.y << ", " << v3.z << endl << endl;

	cout << endl << "**** Vector 1 += Vector 2 ****" << endl;
	v1 += v2;
	cout << v1.x << ", " << v1.y << ", " << v1.z << endl << endl;

	cout << endl << "**** Vector 1 -= Vector 2 ****" << endl;
	v1 -= v2;
	cout << v1.x << ", " << v1.y << ", " << v1.z << endl << endl;

	cout << "**** Checking if they are the same vector ****" << endl;
	v1 == v2;

	cout << endl << "**** Calculating the distance between v1 and v2 ****" << endl;
	v3.distance_to(v1);
	cout << endl << "Distance: " << v3.x << ", " << v3.y << ", " << v3.z << endl << endl;

	cout << endl << "**** Normalizing vectors ****" << endl << "- Vector 1:" << endl;
	v1.normalize();
	cout << endl << "- Vector 2:" << endl;
	v2.normalize();


	cout << endl << "**** Setting all components to 0 ****" << endl;
	cout << "- Vector 1: ";
	v1.zero();
	cout << endl << "- Vector 2: ";
	v2.zero();

	cout << endl;

	system("pause");
	return 0;
}