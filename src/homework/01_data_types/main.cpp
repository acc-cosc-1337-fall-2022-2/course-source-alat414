#include "data_types.h"
#include <iostream>
/*
a. create an int variable named num

b. use the cin obj. to capture a number 
from the keyboard assign the number to num

c. create an int variable name result, 
call the multiply_numbers to the result variable, 
and display the result variable to the screen. 

d. create an int variable named num1, assign it the value 4. 

e. call the function multiply_numbers with num1 as its parameter, 
assign the return value to the result variable, 
and show the result via screen. 
*/
using namespace std;

int num1 = 4, result;

int main ()
{
	int num;
	std::cout<<"Enter the value for int variable:";
	cin >> num;
	std::cout<<"the first int variable is" << num << endl;

	return 0;
	result = multiply_numbers(num1);
	cout << num1 << result;

	return 0;

}

