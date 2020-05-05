#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	int total{0};
	int num1;
	int num2;
	int num3;
	double avg;
	cout << "Enter thress numbers: " << endl;
	cin >> num1 >> num2 >> num3;
	total = num1 + num2 + num3;   // NOTE: This is integer value
	avg = static_cast<double>(total) / 3; 	// As one value is typecasted to double. This will be float calculation
	cout << "Average of numbers " << num1 << ", " << num2 << ", " << num3 << " = " << avg << endl;
	return 0;
}
