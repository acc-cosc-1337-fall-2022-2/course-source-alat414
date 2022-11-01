// a) Add the include statements for hwexpressions.h  and cin and cout
// b) In the main function, write code to use the functions get_sales_tax_amount and get_tip_amount.
// c) Create double variables named meal_amount, tip_rate, tip_amount, tax_amount, and total.
// d) Use the cin object to capture the number from the keyboard, assign the number to 
//     meal_amount.
// e) Call the get_sales_tax_amount with meal_amount as its parameter, 
//     assign the return value of the function get_sales_tax_amount to the tax_amount variable. 
// f) Capture the tip rate from keyboard and assign the value to tip_rate variable.
// g) Call the function get_tip_amount with meal_amount and tip_rate as its parameters, 
//     set function get_tip_amount return value to tip_amount.
// h)  Add tip_amount, tax_amount and meal_amount , and save result to total variable.
// i) Display a receipt (formatting the number decimal spaces is optional): 
//     Meal Amount:           20
//     Sales Tax:           1.35       
//     Tip Amount:             3
//     Total:              24.35

#include "hwexpressions.h"
#include <iostream>



using std::cout;
using std::cin;

int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	

	std::cout << "Enter the meal amount";

	cin >> meal_amount;
	
	get_sales_tax_amount(meal_amount);


	tax_amount = get_sales_tax_amount(meal_amount);

	std::cout << " the tax amount is" << tax_amount;

	std::cout << " Enter the tip rate" ;
	cin >> tip_rate;

	tip_rate = tip_rate/100;

	tip_amount = get_tip_amount(meal_amount, tip_rate);

	total = tip_amount + tax_amount + meal_amount;


	std::cout << "Meal Amount" << meal_amount;
	std::cout << "Sales Tax" << tax_amount;
	std::cout << "Tip Amount" << tip_amount;
	std::cout << "Total:" << total;

	return 0;
}
