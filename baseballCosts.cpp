// Baseball Costs
// A program that calculates how much a Little League baseball team spent the previous year to purchase new baseballs. The program 
// should prompt the user to enter the number of baseballs purchased and the cost of each baseball. It should then calculate and
// display the total amount spent to purchase the baseballs. 

#include <iostream>
using namespace std;

int main() {
	int baseball;
	int cost;
	int total;

	cout << "How many baseballs were purchased?" << endl;
	cin >> baseball;
	cout << "How much did each baseball cost?" << endl;
	cin >> cost;
	total = baseball * cost;
	cout << "You had spent $" << total << " last year on baseballs." << endl;
	return 0;
}
