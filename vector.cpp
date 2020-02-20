#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;


int main(){

	vector <char> vowels {'a', 'e', 'i', 'o', 'u'};
	cout << vowels.at(0) << endl;
	cout << vowels.at(4) << endl;

	vector <int> test_scores(3, 50);	// Length of vector is 3 and all scores initialized to 50.

	cout << test_scores.at(0) << endl;
	cout << test_scores.at(1) << endl;
	cout << test_scores.at(2) << endl;

	cout << "Present length of Vector = " << test_scores.size() << endl;

	// Adding/Appending elements to vector.
	test_scores.push_back(100);
	test_scores.push_back(105);

	cout << "New elements added: " << endl;
	cout << test_scores.at(3) << endl;
	cout << test_scores.at(4) << endl;

	cout << "New length of Vector = " << test_scores.size() << endl;

	return 0;

}

