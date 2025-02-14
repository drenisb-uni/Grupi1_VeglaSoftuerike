#include <iostream>
#include <iomanip>

using namespace std;

int const menuCount = 4;

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

int main()
{
    std::cout << "Hello World!\n";
}
