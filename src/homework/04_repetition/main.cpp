#include<dna.h>
#include<dna.cpp>
#include<iostream>
#include<string>

/*
Create the following menu:
Use a do-while loop to create the menu

1-Factorial
2-Greatest Common Divisor
3-Exit

If user selects 3, prompt the user for confirmation (are you sure you want to exit?).
*/
using namespace :: std;

int main() {
	int option,
		cont = 0,
		num1,
		num2;
	cout << "Options";

	do
	{
		cout << "Choose option: 1 , 2, 3";
		cin >> option;

		if (option == 1)
		{
			cin >> num1;
			factorial(num1);
			cont = 0;
		}
		else if (option == 2)
		{
			cout << "Enter two numbers.";
			cin >> num1;
			cin >> num2;
			cout << gcf(num1, num2) << endl;
			cont = 0;
		}	
		else if (option == 3)
		{	
			cout << "Are you sure you want to exit. 1 = Yes, 2 = No.";
			cin >> cont;
		}
	}
	while (cont == 0);

	cout << "Thanks";

		return 0;
	
}
