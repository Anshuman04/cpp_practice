#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

int main(){

	vector <int> vec1, vec2;

	// Push 10 and 20 to vec1.
	vec1.push_back(10);
	vec1.push_back(20);

	//Display vec1
	cout << "Contents of vector 1: " << vec1.at(0) << ", " << vec1.at(1) << endl;

	//Push 100 and 200 to vec2
	vec2.push_back(100);
	vec2.push_back(200);

	// Display vec2
	cout << "Contents of vector 2: " << vec2.at(0) << ", " << vec2.at(1) << endl;

	// Declare 2d Vector
	vector <vector<int>> vector2D;

	// Push vec1 and vec2 to vector2D
	vector2D.push_back(vec1);
	vector2D.push_back(vec2);

	// Display Vector 2D
	cout << "\n\n Contents of 2D vector => \n\n";
	cout << "Row 1 => " << vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1) << endl;
	cout << "Row 2 => " << vector2D.at(1).at(0) << ", " << vector2D.at(1).at(1) << endl;


	// Change content of vec1
	vec1.at(0) = 400;

	// Display Vector 2D again.
	cout << "\n\n Contents of 2D vector => \n\n";
	cout << "Row 1 => " << vector2D.at(0).at(0) << ", " << vector2D.at(0).at(1) << endl;
	cout << "Row 2 => " << vector2D.at(1).at(0) << ", " << vector2D.at(1).at(1) << endl;
}