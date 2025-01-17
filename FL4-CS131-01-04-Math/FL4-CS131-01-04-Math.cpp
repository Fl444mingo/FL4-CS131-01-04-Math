#include <iostream>
using namespace std;
int main()
{
	int first_number, second_number;
	cout << "What is your first number? ";
	cin >> first_number;
	cout << "What is your second number? ";
	cin >> second_number;
	// addition with "+"
	cout << first_number << " plus " << second_number;
	cout << " is " << first_number + second_number << "\n\n";
	// subtraction with "-"
	cout << first_number << " minus " << second_number;
	cout << " is " << first_number - second_number << "\n\n";
	// multiplication with "*"
	cout << first_number << " times " << second_number;
	cout << " is " << first_number * second_number << "\n\n";
	// division with "/"
	cout << first_number << " divided by " << second_number;
	cout << " is " << first_number / second_number << "\n\n";
	// modulus with "%"
	cout << first_number << " modulus " << second_number;
	cout << " is " << first_number % second_number << ".\n\n";
	system("pause");
	return 0;
}