// Chapter 5, Programming Challenge 17: Sales Bar Chart
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const int number_of_stores = 5;
	double sales;

	cout << "Sales bar chart"<<endl;
	cout << "(Each * represents $100 in sales)"<<endl;

	for (int store = 1; store <= number_of_stores; store++)
	{
		cout << "Enter today's sales for store #" << store << ": ";
		cin >> sales;
		cout << "Store #" << store << ": ";

		for (int star = 0; star < sales / 100; star++)
		{
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}
