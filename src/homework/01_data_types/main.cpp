//write include statements
#include "data_types.h"

#include <iostream>

using namespace std;




//write namespace using statement for cout


/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/

int num1 = 4, result;

int main()
{
	int num;

	std::cout << "Enter the value for int variable. ";
	cin >> num;

	std::cout << "the first int variable is: " << num << endl;

	result = multiply_numbers(num1);
	cout << num1 << result;
	

	return 0;
}
