// USD TO INR CONVERTER

#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	const double inr_per_usd {74.2};
	double amt;
	cout << "USD TO INR CONVERTER" << endl;
	cout << "Enter amount in USD: ";
	cin >> amt;
	cout << "Amount in INR = " << amt * inr_per_usd << endl;
	return 0;


}
