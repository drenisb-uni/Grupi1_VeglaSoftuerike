#include <iostream>
#include <iomanip>

using namespace std;

int const menuCount = 4;
string menu[menuCount] = { "Burger","Cheese Burger","Fries","Wings" };
double price[menuCount] = { 2.00, 2.50, 1.00, 3.00 };
long long cardNumber;
int yr;
int mon;
int ccv;
string lastLocation;

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

void Order::ChooseFood()
{
	char a;
	cout << "\n" << setw(20) << setfill('-') << "\n";
	for (int i = 0; i < menuCount; i++)
	{
		cout << "Type the number of food you would like to choose: ";
		cin >> foodIndex[i];
		cout << "Type the number of how many portions would you like: ";
		cin >> foodCount[i];

		cout << "\nDo you want anything else? Enter (1) if yes | (any key) if no:\n";
		cin >> a;
		if (a == '1') {
			orderCount++;
			continue;
		}
		else
			break;
	}
}
void Order::ChooseLocation() {
	char saveinfo;
	cout << "\n" << setw(20) << setfill('-') << "\n";
	cout << "Type the location for the delivery:\n";
	cin >> location;
	cout << "\nDo you want to save location? Enter (1) if yes | (any key) if no:\n";
	cin >> saveinfo;
	if (saveinfo == '1')
		lastLocation = location;
}
void Order::Payment() {
	double totalPrice = 0;
	cout << "\n" << setw(20) << setfill('-') << "\n";
	for (int i = 0; i < orderCount; i++)
	{
		totalPrice += price[foodIndex[i] - 1] * foodCount[i];
	}
	cout << "The Total Price is: " << totalPrice << "\n";
}
void CardPayment() {

	long long cardNumber1;
	int yr1;
	int mon1;
	int ccv1;
	char saveinfo;
	cout << setw(50) << setfill('-') << "\n";
	cout << "\nType your card information to complete payment:\n";
	cout << setw(20) << setfill('-') << "\n";
	cout << "Card Number: ";
	cin >> cardNumber1;
	cout << "ED month: ";
	cin >> mon1;
	cout << "ED Year: ";
	cin >> yr1;
	cout << "CCV: ";
	cin >> ccv1;
	cout << setw(50) << setfill('-') << "\n";
	cout << "\nDo you want to save card information? Enter (1) if yes | (any key) if no:\n";
	cin >> saveinfo;
	if (saveinfo == '1')
	{
		cardNumber = cardNumber1;
		mon = mon1;
		yr = yr1;
		ccv = ccv1;
	}

}

void ShowMenu()
{
	cout << "What would you like to order:\n";
	for (int i = 0; i < menuCount; i++)
		cout << menu[i] << " - " << fixed << setprecision(2) << price[i] << ": " << i << endl;
}


int main()
{
	Order order;
	order.ChooseFood();
	ShowMenu();
}
