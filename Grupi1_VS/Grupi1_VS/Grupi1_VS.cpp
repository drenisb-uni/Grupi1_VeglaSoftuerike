#include <iostream>
#include <iomanip>

using namespace std;

int const menuCount = 4;
string menu[menuCount] = { "Burger","Cheese Burger","Fries","Wings" };
double price[menuCount] = { 2.00, 2.50, 1.00, 3.00 };

struct Order
{
	int foodIndex[menuCount];
	int foodCount[menuCount];
	int orderCount = 1;
	string location;

	void ChooseFood();
	void ChooseLocation();
	void Payment();
};


void ShowMenu()
{
	cout << "What would you like to order:\n";
	for (int i = 0; i < menuCount; i++)
		cout << menu[i] << " - " << fixed << setprecision(2) << price[i] << ": " << i << endl;
}


int main()
{
	ShowMenu();
}
