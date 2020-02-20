#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main(){
	cout << "ROOM CHARGES: \n";
	cout << "- $25 per small room\n";
	cout << "- $35 per large room\n";
	cout << "NOTE: Service tax: 6%\n";
	const double service_tax_rate {0.06};
	cout << "Enter no. of small rooms required: ";
	int small_rooms;
	cin >> small_rooms;
	const int small_room_cost {25};
	cout << "Enter no. of large rooms required: ";
	int large_rooms;
	cin >> large_rooms;
	const int large_room_cost {35};
	int room_charges;
	double service_tax;
	double total_charges;
	room_charges = (small_rooms * small_room_cost) + (large_rooms * large_room_cost);
	service_tax = service_tax_rate * room_charges;
	total_charges = room_charges + service_tax;
	cout << "Total estimate: $" << total_charges << endl;
	cout << "This estimate is only valid for 30 days.";
	return 0;
}