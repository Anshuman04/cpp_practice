#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main(){

	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
	cout << vowels.at(0) << endl;
	cout << vowels.at(4) << endl;
	return 0;

}

