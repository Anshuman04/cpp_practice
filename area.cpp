#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){

	cout << "Enter the width of the room: ";
	int room_width {0};
	cin >> room_width;

	cout << "Enter the lenth of the room: ";
	int room_length {0};
	cin >> room_length;

	cout << "The area of the room is " << room_length * room_width << " square metres." << endl;
}